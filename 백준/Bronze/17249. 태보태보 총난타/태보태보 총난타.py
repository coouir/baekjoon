string = input()

l, r = 0, 0
check = True

for c in string:
    if c == "(":
        check = False
    if c == "@":
        if check:
            l += 1
        else:
            r += 1

print(l, r)
