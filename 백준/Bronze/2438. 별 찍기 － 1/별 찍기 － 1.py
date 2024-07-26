N = int(input())

starList = []

for i in range(N):
    starList.append('*'*(i+1))

print('\n'.join(starList))