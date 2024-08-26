i = 1
while True:
    a, b, c = map(int, input().split())
    if a == 0 and b == 0 and c == 0:
        break
    else:
        print("Triangle #{}".format(i))
        if a == -1:
            if b < c:
                print("a = {:.3f}".format((c**2-b**2)**(1/2)))
            else:
                print("Impossible.")
        if b == -1:
            if a < c:
                print("b = {:.3f}".format((c**2-a**2)**(1/2)))
            else:
                print("Impossible.")
        if c == -1:
            print("c = {:.3f}".format((a**2+b**2)**(1/2)))
        print()
        i += 1
