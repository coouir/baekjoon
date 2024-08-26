x1, x2 = map(int, input().split())
a, b, c, d, e = map(int, input().split())

a = a//3
b = (b-d)//2
c = c - e
x2 = a*(x2**3)+b*(x2**2)+c*(x2)
x1 = a*(x1**3)+b*(x1**2)+c*(x1)
print(x2-x1)