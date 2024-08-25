A = int(input())
B = int(input())
C = int(input())
R = [0] * 10

for i in str(A*B*C):
    R[int(i)] += 1

print('\n'.join(map(str, R)))