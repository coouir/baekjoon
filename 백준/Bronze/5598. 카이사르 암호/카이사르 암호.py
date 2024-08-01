string = input()

for i in string:
    print(chr(((ord(i) - 42) % 26) + 65), end='')