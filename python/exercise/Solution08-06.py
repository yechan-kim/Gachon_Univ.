inStr, outStr = '', ''

inStr = input('문자열 -->')

for i in range(0, len(inStr)) :
    if    inStr[i].isdigit() ==  False  :
         outStr += inStr[i]

print('숫자 제거 --> ' + outStr)
