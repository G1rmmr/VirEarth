import cv2, HandTrackingModule as htm

cap = cv2.VideoCapture(0)
cap.set(3, 2560); cap.set(4, 1920)
detector = htm.handDetector(detectionCon = 0.75)

tipIds = [4, 8, 12, 16, 20]; now_itm = 0
def invn(lm, fngrCnt):
    global tipIds, now_itm

    if fngrCnt == 0: cv2.putText(img, "Unfold to use items", (lm[0][1]-50, lm[0][2]),
                                 cv2.FONT_HERSHEY_PLAIN, 1, (200, 200, 200), 2)
    elif fngrCnt == 5:
        for id in tipIds:
            if id == 4: cv2.putText(img, "Inventory status", (lm[id][1]-100, lm[id][2]),
                                    cv2.FONT_HERSHEY_PLAIN, 1, (200, 200, 200), 2)

            else: cv2.putText(img, str(lm[id][0] // 4 - 1), (lm[id][1], lm[id][2] + 5),
                              cv2.FONT_HERSHEY_PLAIN, 1, (200, 200, 200), 2)
    else:
        cv2.putText(img, str(fngrCnt), (lm[0][1], lm[0][2] - 100),
                    cv2.FONT_HERSHEY_PLAIN, 3, (200, 200, 200), 3)

        cv2.putText(img, "Item is equipped", (lm[0][1] - 50, lm[0][2]),
                    cv2.FONT_HERSHEY_PLAIN, 1, (200, 200, 200), 2)

        now_itm = fngrCnt

def dtct_frnt(lftmod, lm):
    d = [lm[i][1] for i in range(5,17,4)]
    if lftmod: return False if d[0] > d[1] and d[1] > d[2] else True
    else: return False if d[0] < d[1] and d[1] < d[2] else True

print("왼손인식 모드를 활성화하시겠습니까?. yes / no"); lftmod = True if input() == "yes" else False
while True:

    success, img = cap.read()
    img = detector.findHands(img, draw=False)
    lmList = detector.findPosition(img, draw=False)

    cv2.putText(img, "Left mode activated" if lftmod else "", (50, 100),
                cv2.FONT_HERSHEY_PLAIN, 1, (256, 0, 0), 2)

    if len(lmList) and dtct_frnt(lftmod, lmList):
        fingers = []

        # Thumb
        id = tipIds[0]; x = lmList[id][1]; y = lmList[id-1][1]
        fingers.append(1 if ((x > y) and not lftmod) or ((x < y) and lftmod) else 0)

        #other fingers
        for i in range(1, 5):
            id = tipIds[i]; x = lmList[id][2]; y = lmList[id-2][2]
            fingers.append(1 if x < y else 0)

        fingrs = fingers.count(1); invn(lmList, fingrs)

    if now_itm: cv2.putText(img, f"{now_itm} is equipped", (600, 400),
                            cv2.FONT_HERSHEY_PLAIN, 1, (0, 0, 0), 2)

    cv2.imshow("Inventory", img); cv2.waitKey(1)