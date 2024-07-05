nList = []

for i in range(7):
    n = int(input())

    if n%2 == 1:
        nList.append(n)

nList = sorted(nList)

if len(nList) == 0:
    print(-1)
else:
    print(sum(nList))
    print(nList[0])