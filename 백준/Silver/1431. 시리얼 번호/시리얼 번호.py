arr = []
N = int(input())
for i in range(N):
    arr.append(input())

arr.sort(key = lambda x: [len(x), sum([int(num) for num in x if num.isdigit()]), x])
print('\n'.join(arr))