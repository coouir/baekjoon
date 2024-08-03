input = __import__('sys').stdin.readline

N, K = map(int, input().split())
l = []
for i in range(N):
    Pi = int(input())
    arr = list(map(int, input().split()))
    m = 0
    for j in range(len(arr)):
        if j%2 == 0:
            m = max(m, arr[j]**2 + arr[j+1]**2)
    l.append(m)
l.sort()
print("{:.2f}".format(l[K-1]))