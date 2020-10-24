N, K = map(int, input().split(' '))

L = []

for i in range(0, N):
    L.append(int(input()))

retval = 0
L = L[::-1]  # 역순정렬
for i in L:
    while (K >= i):
        K -= i
        retval += 1
print(retval)
