N = int(input())

D = {}

for i in range(N):
    string = input()
    if string in D:
        D[string] += 1
    else:
        D[string] = 1
    
max_cnt = 0
for j in D:
    if D[j] > max_cnt:
        max_cnt = D[j]

l = []
for p in D:
    if D[p] == max_cnt:
        l.append(p)

l = sorted(l)
print(l[0])
