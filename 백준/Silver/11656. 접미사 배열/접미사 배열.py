arr = []
S = input()
for i in range(len(S)):
    arr.append(S[i:])

print('\n'.join(sorted(arr)))