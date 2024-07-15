string = input().upper()

D = {}

for i in string:
    if i in D:
        D[i] += 1
    else:
        D[i] = 1

max = 0
for j in D:
    if D[j] > max:
        max = D[j]

l = []
for p in D:
    if D[p] == max:
        l.append(p)

if len(l) == 1:
    print(l[0])
else:
    print("?")