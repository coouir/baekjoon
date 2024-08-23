from itertools import permutations as pm
input = __import__("sys").stdin.readline

N = int(input())
arr = list(map(int, input().split()))

ans = 0
for t in pm(arr):
    s = 0
    for i in range(len(t)-1):
        s += abs(t[i]-t[i+1])
    ans = max(ans, s)
 
print(ans)