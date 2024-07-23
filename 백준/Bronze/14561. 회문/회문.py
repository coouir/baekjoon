T = int(input())

for i in range(T):
    A, n = map(int, input().split())

    val = {i: str(i) for i in range(10)}
    val.update({i+10: chr(97+i) for i in range(26)})
    ans = []
    while 1:
        if A == 0: break
        x = A % n
        ans.append(val[x])
        A //= n
    
    string = ''.join(ans[::-1])

    if string == string[::-1]:
        print(1)
    else:
        print(0)