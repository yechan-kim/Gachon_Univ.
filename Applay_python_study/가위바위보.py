from random import*

a = randint(1, 3)

b = int(input("번호를 입력하세요! [1: 가위 / 2: 바위 / 3:보]: "))

if(a==b):
    print("비겼습니다!")

elif(a==1):
    if(b==2):
        print("이겼습니다!")
    elif(b==3):
        print("졌습니다...")

elif(a==2):
    if(b==1):
         print("졌습니다...")
    elif(b==3):
       print("이겼습니다!")

elif(a==3):
    if(b==1):
        print("이겼습니다!")
    elif(b==2):
        print("졌습니다...")

else:
    print("잘못 입력하였습니다!")