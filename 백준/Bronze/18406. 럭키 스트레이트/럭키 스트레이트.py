N = input()

l = 0
r = 0

for i in range(len(N)//2):
    l += int(N[i])
    r += int(N[-1-i])

if l == r:
    print("LUCKY")
else:
    print("READY")