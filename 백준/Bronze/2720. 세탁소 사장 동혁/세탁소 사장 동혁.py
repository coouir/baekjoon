arr = [25, 10, 5, 1]

T = int(input())
for i in range(T):
    C = int(input())
    for c in arr:
        print(C//c, end=" ")
        C %= c
    print()