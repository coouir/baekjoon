arr = [0] * 31

for i in range(28):
    arr[int(input())] = 1

for i in range(1, len(arr)):
    if arr[i] == 0:
        print(i)