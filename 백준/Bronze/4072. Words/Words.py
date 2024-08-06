while True:
    arr = list(input().split())

    if arr[0] == "#":
        break
    else:
        for i in range(len(arr)):
            print(arr[i][::-1], end= ' ')
        print()