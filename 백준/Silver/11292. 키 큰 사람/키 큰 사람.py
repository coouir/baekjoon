while True:
    N = int(input())
    if N == 0: break
    else:
        arr = []
        for i in range(N):
            name, h = input().split(); h = float(h)
            arr.append([name, h])
        arr.sort(key=lambda x: [-x[1]])
        for i in range(N):
            if arr[i][1] == arr[0][1]:
                print(arr[i][0], end=' ')
            else:
                break 
        print()