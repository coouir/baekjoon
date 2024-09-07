def f(n):
    if n == 0:
        return 1
    return f(n-1)*n

N = int(input())
cnt = 0
for c in str(f(N))[::-1]:
    if c == '0':
        cnt += 1
    else:
        print(cnt)
        break