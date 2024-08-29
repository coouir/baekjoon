arr = [False, False] + [True] * 4000000

for i in range(2, 4000000):
    if arr[i]:
        for j in range(i+i, 4000000, i):
            arr[j] = False
                
A, B, D = map(int, input().split())
cnt = 0
for i in range(A, B+1):
    if arr[i]:
        if str(D) in str(i):
            cnt += 1
print(cnt)