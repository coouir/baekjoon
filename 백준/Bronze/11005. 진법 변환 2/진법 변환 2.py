val = {i: str(i) for i in range(10)}
val.update({i+10: chr(65+i) for i in range(26)})

N, B = map(int, input().split())
ans = []
while 1:
    if N == 0: break
    x = N % B
    ans.append(val[x])
    N //= B
print(''.join(ans[::-1]))