string = list(input().split())

for i in range(len(string)):
    if string[i] in ['i', 'pa', 'te', 'ni', 'niti', 'a', 'ali', 'nego', 'no', 'ili']:
        if i == 0:
            print(string[i][0].upper(), end='')
    else:
        print(string[i][0].upper(), end='')