k = int(input())
a, b, c, d = map(int, input().split())

if a*k + b == c*k + d:
    print("Yes {}".format(a*k+b))
else:
    print("No")