i = 1
while True:

    a = input()
    if a == '0':
        break
    else:
        r, w, l = map(int, a.split())
        if (4*r*r) >= (w*w+l*l):
            print("Pizza {} fits on the table.".format(i))
        else:
            print("Pizza {} does not fit on the table.".format(i))
    i += 1