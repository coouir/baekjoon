input = __import__("sys").stdin.readline
N = int(input())
arr = []
for i in range(N):
    arr.append(int(input()))

print('\n'.join(map(str, sorted(arr))))