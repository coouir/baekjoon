import sys
sys.setrecursionlimit(10**6)

input = __import__('sys').stdin.readline

def check(i):
    global m 
    global cnt

    if i == -1: return
    if m < arr[i]:
        m = arr[i]
        cnt += 1
    check(i-1)

N = int(input())
arr = []
cnt = 0
m = 0

for i in range(N):
    arr.append(int(input()))

check(len(arr)-1)

print(cnt)