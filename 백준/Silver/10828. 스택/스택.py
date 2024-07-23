input = __import__('sys').stdin.readline

N = int(input())
stack = []

for i in range(N):
    l = list(input().split())
    if l[0] == 'push':
        stack.append(l[1])
    elif l[0] == 'pop':
        if len(stack) == 0:
            print(-1)
        else:
            print(stack.pop())
    elif l[0] == 'size':
        print(len(stack))
    elif l[0] == 'empty':
        if len(stack) == 0:
            print(1)
        else:
            print(0)
    else:
        if len(stack) == 0:
            print(-1)
        else:
            print(stack[-1])