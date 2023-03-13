cnt = 0
for i in range(8):
    board = input()
    if (i % 2) == 0:
        for j in range(0, 8, 2):
            if board[j] == "F":
                cnt += 1
    else:
        for j in range(1, 8, 2):
            if board[j] == "F":
                cnt += 1
print(cnt)