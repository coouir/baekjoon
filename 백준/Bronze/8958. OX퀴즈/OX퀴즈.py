T = int(input())
for _ in range(T):
    str = input()
    arr = [0 for i in range(len(str))]

    if str[0] == 'O':
        arr[0] = 1

    for i in range(1, len(str)):
        if str[i] == 'O':
            arr[i] = arr[i-1] + 1
    
    print(sum(arr))
