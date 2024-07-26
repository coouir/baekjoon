a, b, c = input().split()
a = int(a); b = int(b); c = int(c)

if a == b:
    if b == c:
        print(10000 +(a*1000))
    else:
        print(1000 + (a*100))
else:
    if a == c:
        print(1000 + (a*100))
    else:
        if b == c:
            print(1000+(b*100))
        else:
            if a > b:
                if c > a:
                    print(c*100)
                else:
                    print(a*100)
            else:
                if c > b:
                    print(c*100)
                else:
                    print(b*100)