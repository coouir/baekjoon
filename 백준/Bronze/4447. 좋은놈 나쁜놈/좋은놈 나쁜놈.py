n = int(input())
for i in range(n):
    name = input()
    g, b = 0, 0
    for c in name:
        if c.isalpha():
            if c in ['G', 'g']:
                g += 1
            elif c in ['B', 'b']:
                b += 1
    if g > b:
        print("{} is GOOD".format(name))
    elif g == b:
        print("{} is NEUTRAL".format(name))
    else:
        print("{} is A BADDY".format(name))