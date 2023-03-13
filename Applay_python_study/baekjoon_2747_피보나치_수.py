num = int(input())
n = [0, 1]
if(num > 1):
    for i in range(2, num+1):
        n.append(n[i-1]+n[i-2])
print(n[num])