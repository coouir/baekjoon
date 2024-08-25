def f(num):
    if num == 0:
        return 1
    return f(num-1) * num

n, m = map(int, input().split())
print(f(n)//(f(m)*f(n-m)))