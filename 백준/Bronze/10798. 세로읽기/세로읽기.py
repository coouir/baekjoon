l = []
for i in range(5):
    l.append(list(input()))

m = 0
for _ in l:
    if len(_) > m:
        m = len(_)
for i in range(m):
    for j in range(len(l)):
        try:
            print(l[j][i],end='')
        except:
            continue
