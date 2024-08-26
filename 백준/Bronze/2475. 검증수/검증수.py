arr = map(int, input().split())

r = 0
for i in arr:
    r += i**2

print(r%10)