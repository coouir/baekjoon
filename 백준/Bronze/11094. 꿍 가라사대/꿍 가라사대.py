N = int(input())

for i in range(N):
    sList = input().split()
    if sList[0] == 'Simon' and sList[1] == 'says':
        print(' '+' '.join(sList[2::]))
