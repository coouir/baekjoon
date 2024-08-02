T = int(input())

for i in range(T):
    a, b = map(int, input().split())
    string = input()
    for j in range(len(string)):
        X = ord(string[j])-65
        E = (a*X+b) % 26
        print(chr(E+65), end='')
    print()