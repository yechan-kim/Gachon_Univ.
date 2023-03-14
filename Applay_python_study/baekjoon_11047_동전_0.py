import sys
N, K = map(int, sys.stdin.readline().split(' '))

L = []

for i in range(0, N):
    L.append(int(sys.stdin.readline()))

retval = 0

for i in L[::-1]:
    retval += K // i
    K = K % i

print(retval)