## 전역 변수 선언 부분
numCnt, lowerCnt, upperCnt, hanCnt, etcCnt = [0] * 5
ch = ""

## 메인(main) 코드 부분
inStr = input("문자열을 입력하세요 : ")

for ch in inStr :
    if ( ord(ch) >= ord("A") and ord(ch) <= ord("Z")) :
        upperCnt += 1
    elif ( ord(ch) >= ord("a") and ord(ch) <= ord("z")) :
        lowerCnt += 1
    elif ( ord(ch) >= ord("0") and ord(ch) <= ord("9")) :
        numCnt += 1
    elif ( ord(ch) >= ord("가") and ord(ch) <= ord("힣")) :
        hanCnt += 1
    else :
        etcCnt += 1

print("대문자 :", upperCnt, " 소문자:", lowerCnt, " 숫자:", numCnt, " 한글:", hanCnt, " 기타:", etcCnt)
