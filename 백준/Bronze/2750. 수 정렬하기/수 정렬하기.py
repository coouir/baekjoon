N = int(input())
nList = []

for i in range(N):
    nList.append(int(input()))

nList = sorted(nList)

for j in nList:
    print(j)