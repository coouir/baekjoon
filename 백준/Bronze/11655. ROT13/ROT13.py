l = list(input())

for i in range(len(l)):
    x = ord(l[i])
    if 65 <= x <= 90 or 97 <= x <= 122:
        if l[i] == l[i].upper():
            x -= 65
        else:
            x -= 97
        x += 13
        x %= 26
        if l[i] == l[i].upper():
            x += 65
        else:
            x += 97
        l[i] = chr(x)

print(''.join(l))