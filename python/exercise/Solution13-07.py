import turtle
import random
import sqlite3
import time

## 전역 변수 선언 부분 ##
swidth, sheight, pSize, exitCount = 300, 300, 3, 0
r, g, b, angle, dist, curX, curY = [0] * 7

## 메인 코드 부분 ##
turtle.title('거북이가 맘대로 다니기(DB)')
turtle.shape('turtle')
turtle.pensize(pSize)
turtle.setup(width=swidth+30, height=sheight+30)
turtle.screensize(swidth, sheight)


# 테이블 만들기
con = sqlite3.connect("C:/CookPython/turtleDB")  
cur = con.cursor()
cur.execute("DROP TABLE IF EXISTS turtleTable")
cur.execute("CREATE  TABLE  turtleTable ( lineID INT, r float, g float, b float, entry INT,  xCor float, yCor float)")

# 1회 그리기 (랜덤)

lineID = 1
entry = 1
while True :
    r = random.random();
    g = random.random()
    b = random.random()
    turtle.pencolor((r, g, b))
    
    angle =  random.randrange(0,360)
    dist = random.randrange(1,100)
    turtle.left(angle)
    turtle.forward(dist)
    curX = turtle.xcor()
    curY = turtle.ycor()

    cur.execute("INSERT INTO turtleTable VALUES(" + str(lineID)+ "," +  str(r) + "," +  str(g) + "," +  str(b) + "," \
                 +  str(entry) + ","  +  str(curX) + ","   +  str(curY) + ")" )
    entry += 1

    if (-swidth/2<= curX and curX <= swidth/2) and (-sheight/2<= curY and curY <= sheight/2) :
        pass
    else :
        turtle.penup()
        turtle.goto( 0, 0 )
        turtle.pendown()

        lineID += 1
        entry = 1
        
        exitCount += 1
        if exitCount >= 5 :
            break

con.commit()

time.sleep(3) # 3초간 멈춤
turtle.clearscreen()

# 2회 그리기 (DB)
cur.execute("SELECT * FROM turtleTable order by lineID DESC, entry DESC")
saveID = -1
turtle.pensize(pSize)
while (True) :
        row = cur.fetchone()
        if row== None :
            break;
        lineID = row[0]
        r = row[1]
        g = row[2]
        b = row[3]
        entry =row[4]
        xCor =row[5]
        yCor =row[6]
       
        if saveID != lineID :  # 새로운 선분이면
            turtle.goto( 0, 0 )
            turtle.penup()
            turtle.goto( xCor, yCor )
            turtle.pendown()
            saveID = lineID
            turtle.pencolor((r,g,b))
        else :
            turtle.goto( xCor, yCor )
            turtle.pencolor((r,g,b))
            
con.close()
turtle.done()
