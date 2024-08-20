N = int(input())

S = 0
C = 0

while True:
    C += 1
    S += C
    if S > N:
        break

print(C-1)