import turtle
import random

## 전역 변수 선언 부분 ##
swidth, sheight, pSize = 300, 300, 3
r, g, b, dist = [0] * 4

## 메인 코드 부분 ##
turtle.title('거북이가 소라 그리기')
turtle.shape('turtle')
turtle.pensize(pSize)
turtle.setup(width=swidth+30, height=sheight+30)
turtle.screensize(swidth, sheight)

dist = 5
for  i  in  range(1, 80) :

    r = random.random();
    g = random.random()
    b = random.random()
    turtle.pencolor((r, g, b))

    turtle.forward(dist)
    turtle.left(30)
    dist += 1
    
