nList = []

for i in range(9):
    nList.append(int(input()))

print(max(nList))
print(nList.index(max(nList))+1)