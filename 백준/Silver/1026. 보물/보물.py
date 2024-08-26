N = int(input())
arr1 = sorted(list(map(int, input().split())))
arr2 = sorted(list(map(int, input().split())), reverse=True)

r = 0
for i in range(N):
    r += arr1[i]*arr2[i]
print(r)