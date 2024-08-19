def f(n):
    global ans
    if n == N+1: return
    ans *= n
    f(n+1)

ans = 1
N = int(input())
f(1)
print(ans)