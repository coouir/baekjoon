nList = list(map(int, input().split()))

while ' '.join(map(str, nList)) != "1 2 3 4 5":
    for i in range(len(nList)-1):
        if nList[i] > nList[i+1]:
            nList[i], nList[i+1] = nList[i+1], nList[i]
            print(' '.join(map(str, nList)))

