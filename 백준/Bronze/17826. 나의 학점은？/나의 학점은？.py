nList = list(map(int, input().split()))
nList = sorted(nList, reverse=True)

n = int(input())

for i in range(len(nList)):
    if n == nList[i]:
        rank = i+1
if rank <= 5:
    print("A+")
elif rank <= 15:
    print("A0")
elif rank <= 30:
    print("B+")
elif rank <= 35:
    print("B0")
elif rank <= 45:
    print("C+")
elif rank <= 48:
    print("C0")
elif rank <= 50:
    print("F")