T = int(input())

for i in range(T):
    n, m = map(int, input().split())
    print("Scenario #{}:".format(i+1))
    print((n+m)*(m-n+1)//2)
    print()