n = int(input())

D = {}

for i in range(n):
    name, s = input().split()
    D[name] = s

lD = list(D.keys())
list = []

for j in range(len(lD)):
    if D[lD[j]] == "enter":
        list.append(lD[j])

list = sorted(list, reverse=True)

for p in list:
    print(p)