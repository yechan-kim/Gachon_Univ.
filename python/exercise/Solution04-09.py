## 전역 변수 선언 부분
money, p50, p10, p5, p1, c500, c100, c50, c10 = 0,0,0,0,0,0,0,0,0

## 메인(main) 코드 부분
money=int(input("교환할 돈은 얼마 ? "))

p50 = money // 50000; money %= 50000
p10= money // 10000; money %= 10000
p5 = money // 5000; money %= 5000
p1 = money // 1000; money %= 1000

c500 = money // 500; money %= 500
c100 = money // 100; money %= 100
c50 = money // 50; money %= 50
c10 = money // 10; money %= 10

print(" 50000원 %d장, 10000원  %d장, 5000원 %d장, 1000원  %d장" % (p50, p10, p5, p1))
print(" 500원 %d개, 100원 %d개, 50원 %d개, 10원  %d개" % (c500, c100, c50, c10))
print(" 바꾸지 못한 돈 ==> %d원 \n"% money)
