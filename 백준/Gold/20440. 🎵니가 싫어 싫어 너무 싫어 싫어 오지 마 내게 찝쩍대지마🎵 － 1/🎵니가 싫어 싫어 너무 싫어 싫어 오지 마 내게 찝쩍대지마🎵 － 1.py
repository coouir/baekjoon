N = int(input())

arrP = [list(map(int, input().split())) for _ in range(N)]
arrS = []
for i in range(N):
    arrS.append(arrP[i][0])
    arrS.append(arrP[i][1])
arrS.sort()

mapper = {}
for i in range(N*2):
    mapper[arrS[i]] = i+1
mapper2 = {value: key for key, value in mapper.items()}


for i in range(N):
    arrP[i][0] = mapper[arrP[i][0]]
    arrP[i][1] = mapper[arrP[i][1]]

arr = [0 for _ in range(2000100)]
prefix = [0 for _ in range(2000100)]
for i in range(N):
    arr[arrP[i][0]] += 1
    arr[arrP[i][1]] -= 1

for i in range(1, 2000100):
    prefix[i] = arr[i] + prefix[i-1]

M = max(prefix)
print(M)

s = 0
e = 0
for i in range(1, 2000100):
    if prefix[i] == M:
        if prefix[i-1] != M:
            s = mapper2[i]
        if prefix[i+1] != M:
            e = mapper2[i+1]

        if e != 0:
            print(s, e)
            exit()
