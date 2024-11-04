L, P = map(int, input().split())
arr = list(map(int, input().split()))

for n in arr:
    print(n-(L*P), end=' ')