N = int(input())
string = input()

s = 0

for i in range(len(string)):
    s += ord(string[i])-64

print(s)