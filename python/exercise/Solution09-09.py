def  myRange(start, end, hop = 1) :
    retVal = start
    while  retVal <= end :
        yield retVal
        retVal += hop

hap = 0 

for  i in myRange(1, 5, 2) :
    hap += i
print(hap) 
