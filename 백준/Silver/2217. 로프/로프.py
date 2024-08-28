N = int(input())
arr = []
for i in range(N):
    arr.append(int(input()))
arr.sort(reverse=True)

r = []
for i in range(N):
    r.append(arr[i]*(i+1))
print(max(r))