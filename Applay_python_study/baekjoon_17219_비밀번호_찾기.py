site = {}

A, B = map(int, input().split(' '))

for i in range(0, A):
    C, D = map(str, input().split(' '))
    site[C] = D
for i in range(0, B):
    E = str(input())
    print(site[E])
