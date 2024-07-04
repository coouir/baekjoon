N = int(input())
nList = list(map(int, input().split()))

yC = 0; mC = 0
yT = 0; mT = 0

for i in nList:
    yT = mT = i

    while yT >= 0:
        yT -= 30
        yC += 10
    while mT >= 0:
        mT -= 60
        mC += 15

if yC > mC:
    print('M', mC)
elif yC == mC:
    print('Y', 'M', yC)
else:
    print('Y', yC)