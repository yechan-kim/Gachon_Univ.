a = int(input())
for i in range(0, a):
    cnt = 0
    score = 0
    case = input()
    for j in range(0, len(case)):
        if(case[j] == 'O'):
            cnt += 1
            score += cnt
        elif(case[j] == 'X'):
            cnt = 0
    print(score)
