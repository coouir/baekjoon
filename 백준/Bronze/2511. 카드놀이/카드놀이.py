aList = list(map(int, input().split()))
bList = list(map(int, input().split()))

a, b = 0, 0
rList = []

for i in range(10):
    if aList[i] > bList[i]:
        a += 3
        rList.append('A')
    elif aList[i] == bList[i]:
        a += 1; b += 1
        rList.append('D')
    else:
        b += 3
        rList.append('B')

print(a, b)
if a > b:
    print('A')
elif a < b:
    print('B')
else:
    for j in range(len(rList)-1, -1, -1):
        if j == 0 and rList[j] == 'D':
            print('D')
            break
        if not(rList[j] == 'D'):
            print(rList[j])
            break