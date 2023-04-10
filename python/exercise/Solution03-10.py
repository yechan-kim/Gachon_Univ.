num=input("16진수 한글자 입력 : ")

if  ('0' <= num and num <= '9') or ('a' <= num and num <= 'f') or  ('A' <= num and num <= 'F') :
    print("10진수 ==> ", int(num, 16))
else :
    print("16진수가 아닙니다")

