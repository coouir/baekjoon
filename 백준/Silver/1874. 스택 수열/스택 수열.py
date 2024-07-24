n = int(input())
stack, ans, check = [], [], True
now = 1

for i in range(n):
    number = int(input())
    while now <= number:
        stack.append(now)
        ans.append('+')
        now += 1
    
    if stack[-1] == number:
        stack.pop()
        ans.append('-')
    else:
        check = False
        break

if check:
    print('\n'.join(ans))
else:
    print("NO")