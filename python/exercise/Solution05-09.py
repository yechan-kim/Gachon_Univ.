## 변수 선언 부분 ##
num1, num2 = 0, 0
hap = 0
sosuYN = True

## 메인 코드 부분 ##
num1 = int(input(" *** 시작 숫자를 입력하세요(2이상) : "))
num2 = int(input(" *** 끝 숫자를 입력하세요 : "))

for checkNum in range(num1, num2+1) :
    sosuYN = True
    for i in range(2, checkNum) :
        if  checkNum % i == 0 :
            sosuYN = False
            break
    if sosuYN == True :
        hap += checkNum

print(" %d부터 %d까지 소수의 합은 %d입니다. " % (num1, num2, hap))