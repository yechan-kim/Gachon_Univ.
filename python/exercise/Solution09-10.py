## 함수 선언 부분
def fibo(n) :
    if  n == 0 :
        return 0
    elif n == 1 :
        return 1 
    else  :
        return fibo(n-1) + fibo(n-2)

## 전역 변수 선언 부분
num = 0

## 메인 코드 부분
num = int(input('피보나치 수열 F(N)의 N값을 입력 -->'))

print('F(', num, ') = ', fibo(num))
