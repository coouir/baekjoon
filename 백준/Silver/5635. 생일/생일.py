arr = []
n = int(input())
for i in range(n):
    n, d, m ,y = input().split()
    arr.append([n, int(y), int(m), int(d)])

arr = sorted(arr, key=lambda x:[-x[1], -x[2], -x[3]])

print(arr[0][0])
print(arr[-1][0])