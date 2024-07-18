n = input()

while True:
    try:
        if int(n) == int(n[0]) * len(n):
            print("FA")
            break
        else:
            n = str(int(n[0]) * len(n))
    except EOFError:
        break