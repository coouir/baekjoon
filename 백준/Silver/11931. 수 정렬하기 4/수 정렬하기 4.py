input = __import__('sys').stdin.readline

N = int(input())
nList = []

for i in range(N):
    nList.append(int(input()))

nList = sorted(nList, reverse=True)

for j in nList:
    print(j)