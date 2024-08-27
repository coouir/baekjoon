import math

a, b = map(int, input().split())
c, d = map(int, input().split())

f = math.lcm(b,d)
e = a*(f//b)+c*(f//d)
if math.gcd(e, f) != 1:
    e, f = e//math.gcd(e,f), f//math.gcd(e, f)

print(e, f)