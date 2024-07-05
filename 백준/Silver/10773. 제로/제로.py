K = int(input())

nList = []

for i in range(K):
    n = int(input())

    if n == 0:
        nList.pop()
    else:
        nList.append(n)

print(sum(nList))