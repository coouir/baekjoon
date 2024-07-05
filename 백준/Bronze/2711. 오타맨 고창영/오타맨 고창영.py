T = int(input())

for i in range(T):
    N, string = input().split()
    N = int(N)
    print(string[:N-1] + string[N:])