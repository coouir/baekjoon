input = __import__('sys').stdin.readline

N = int(input())
A = list(map(int, input().split()))
a = [-1] * N
stack = [0]

for i in range(1, N):
    while stack and A[stack[-1]] < A[i]:
        a[stack.pop()] = A[i]
    stack.append(i)
print(*a)