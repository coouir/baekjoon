arr = [-1 for i in range(26)]

S = input()
for i in range(len(S)):
    if arr[ord(S[i])-97] == -1:
        arr[ord(S[i])-97] = i

print(*arr)