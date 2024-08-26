N = input()
arr = []

for n in N:
    arr.append(int(n))

print(''.join(map(str, sorted(arr, reverse=True))))