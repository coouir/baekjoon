N = int(input())

for i in range(N):
    sList = input().split()
    print(' '.join(sList[2::] + sList[0:2]))