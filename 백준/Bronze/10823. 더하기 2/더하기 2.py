s = ''
while True:
    try:
        s += input()
    except EOFError:
        break

l = list(map(int, s.split(',')))
print(sum(l))