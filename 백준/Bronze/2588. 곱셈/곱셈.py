a = int(input())
b = int(input())

c = a * ((b%100)%10)
d = a * ((b%100)//10)
e = a * (b//100)

print(c); print(d); print(e)

print(c + d*10 + e*100)