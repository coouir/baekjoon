A, B = map(int, input().split())

N = int(input())
arr1 = [A]
arr2 = []
for i in range(N):
    arr1.append(int(input()))
for i in range(N+1):
    arr2.append(abs(arr1[i]-B))

if min(arr2) == arr2[0]:
    print(min(arr2))
else:
    print(min(arr2)+1)