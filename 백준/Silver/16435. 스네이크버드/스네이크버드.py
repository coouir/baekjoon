def eat(i):
    global L
    if i == len(arr): return
    if arr[i] <= L:
        L += 1
    else:
        return
    eat(i+1)


N, L = map(int, input().split())
arr = sorted(list(map(int, input().split())))

eat(0)

print(L)