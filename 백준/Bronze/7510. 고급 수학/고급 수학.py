n = int(input())

for i in range(n):
    l = list(map(int, input().split()))
    l = sorted(l)

    print("Scenario #{}:".format(i+1))
    if (l[0]**2 + l[1]**2) == l[2]**2:
        print("yes")
    else:
        print("no")
    print()