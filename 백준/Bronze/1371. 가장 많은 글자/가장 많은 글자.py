l = [0] * 26
l_2 = []

while True:
    try:
        string = input()
        s = []
        for p in string:
            if p != " ":
                s.append(p)
        for i in s:
            l[ord(i)-97] += 1
    except EOFError:
        break

for j in range(len(l)):
            if l[j] == max(l):
               l_2.append(chr(j+97))

print(''.join(l_2)) 