site = {}

A, B = map(int, input().split(' '))

for i in range(A):
    C, D = input().split(' ')
    site[C] = D
for i in range(B):
    E = input()
    print(site[E])