N = int(input())

p = [0]*N
arr = []

for i in range(N):
    arr.append(list(map(int, input().split())))

for i in range(3):
    l = []
    for j in range(N):
        l.append(arr[j][i])
    
    for _ in range(N):
        if l.count(l[_]) == 1:
            p[_] += l[_]

print('\n'.join(map(str, p)))