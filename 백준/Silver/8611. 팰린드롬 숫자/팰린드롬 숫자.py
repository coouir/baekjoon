n = int(input())

cnt = 0
for _ in range(2, 11):
    number = n
    val = {i: str(i) for i in range(10)}
    val.update({i+10: chr(97+i) for i in range(26)})
    ans = []
    while 1:
        if number == 0: break
        x = number % _
        ans.append(val[x])
        number //= _
    
    if ''.join(ans[::-1]) == ''.join(ans):
        print(_, ''.join(ans[::-1]))
        cnt += 1

if cnt == 0:
    print("NIE")