arr = [0 for i in range(10)]

for i in range(5):
    arr[int(input())] += 1

for i in range(10):
    if (arr[i]%2 == 1):
        print(i)
        break
     