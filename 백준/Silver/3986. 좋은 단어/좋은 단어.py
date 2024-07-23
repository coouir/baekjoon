N = int(input())
ans = 0

for i in range(N):
    s = input()
    stack = []
    for j in range(len(s)):
        if len(stack) == 0:
            stack.append(s[j])
        else:
            if stack[-1] == s[j]:
                stack.pop()
            else:
                stack.append(s[j])
    if len(stack) == 0:
        ans += 1
print(ans)