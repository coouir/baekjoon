def f(n):
    if n == 0:
        return 1
    return f(n-1) * n

N = int(input())
print(f(N))