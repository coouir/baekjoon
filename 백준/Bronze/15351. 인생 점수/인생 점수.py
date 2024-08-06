N = int(input())
for i in range(N):
    string = input()
    s = 0
    for c in string:
        if c.isalpha():
            s += ord(c)-64
    if s == 100:
        print("PERFECT LIFE")
    else:
        print(s)