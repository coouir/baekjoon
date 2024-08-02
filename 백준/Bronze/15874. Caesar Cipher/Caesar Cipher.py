k, s = map(int, input().split())
string = input()

for i in range(s):
    if string[i].isalpha():
        if ord('A') <= ord(string[i]) <= ord('Z'):
            print(chr(((ord(string[i])-65+k)%26)+65), end='')
        else:
            print(chr(((ord(string[i])-97+k)%26)+97), end='')
    else:
        print(string[i], end='')