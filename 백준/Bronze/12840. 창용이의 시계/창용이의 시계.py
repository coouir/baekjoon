h, m, s = map(int, input().split())
c = (3600*h)+(60*m)+(s)
q = int(input())
for i in range(q):
    arr = list(map(int, input().split()))
    if arr[0] == 1:
        c = (c+arr[1])%(24*60*60)
    elif arr[0] == 2:
        c = (c-arr[1])%(24*60*60)
    elif arr[0] == 3:
        print(c//3600, (c%3600)//60, (c%3600)%60)