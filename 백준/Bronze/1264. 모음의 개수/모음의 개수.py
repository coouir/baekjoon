while True:
    string = input().lower()
    
    if string == "#":
        break

    cnt = 0

    for i in range(len(string)):
        if string[i] in ['a', 'e', 'i', 'o', 'u']:
            cnt += 1
    print(cnt)