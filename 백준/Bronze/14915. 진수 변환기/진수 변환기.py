D = {}
for i in range(10):
    D[i] = str(i)
for i in range(26):
    D[i+10] = chr(65+i)

m, n = map(int,input().split())
if m == 0:
    print(0)
else:
    ans = []
    while 1:
        if m == 0: break
        x = m % n
        ans.append(D[x])
        m //= n
    print(''.join(ans[::-1]))