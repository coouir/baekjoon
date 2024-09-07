A, B, N = map(int, input().split())

i = 0
Q, R = None, None

while i <= N:
    #몫과 나머지 
    Q = A // B
    R = A % B
    A = R * 10
    i += 1
print(Q)