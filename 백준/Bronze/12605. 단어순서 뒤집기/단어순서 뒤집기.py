N = int(input())
for i in range(N):
    arr = list(input().split())
    print("Case #{}: ".format(i+1)+' '.join(arr[::-1]))