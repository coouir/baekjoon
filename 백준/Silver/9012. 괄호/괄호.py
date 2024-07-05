def f(b):
    if len(b) == 0:
        return
     
    fl = len(b)
    for i in range(len(b)-1):
        if b[i] + b[i+1] == '()':
            b.pop(i); b.pop(i)
            break
    if fl == len(b):
        return

    return f(b)

T = int(input())

for i in range(T):
    s = input()
    l = list(s)

    f(l)
    if len(l) == 0:
        print('YES')
    else:
        print('NO')
