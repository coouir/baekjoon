N, K = map(int, input().split())
nList = list(map(int, input().split(',')))

for i in range(K):
    l = []
    for j in range(len(nList)-1):
        l.append(nList[j+1]-nList[j])
    nList = []
    nList = l

print(','.join(map(str, nList)))