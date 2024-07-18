o, w = 0, 0
i = 1
check = True

while True:
    if w <= 0:
        check = False

    c, n = input().split(); n = int(n)
    if c == 'E':
        w -=n
    elif c == 'F':
        w += n
    elif c == '#':
        if w <= 0 or check == False:
            print("{} RIP".format(i))
        elif w > o/2 and w < 2*o:
            print("{} :-)".format(i))
        else:
            print("{} :-(".format(i))
        i += 1
    elif c == '0':
        break
    else:
        o, w = int(c), n
        check = True