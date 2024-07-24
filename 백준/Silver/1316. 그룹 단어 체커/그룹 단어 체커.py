N = int(input())
cnt = 0

for i in range(N):
    l_s = list(input())
    l = len(l_s)
    s = []

    for j in range(len(l_s)):
        p = l_s.pop()
        if (p in s) and (p != s[-1]):
            break
        else:
            s.append(p)
    if len(s) == l: 
        cnt += 1

print(cnt)