l_s = list(input())
n = []
for i in range(len(l_s)):
    if l_s[i] not in "CAMBRIDGE":
        n.append(l_s[i])

print(''.join(n))