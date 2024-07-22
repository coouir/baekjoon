T = int(input())

for i in range(T):
    n = input()
    r = n[::-1]
    s = str(int(n) + int(r))

    flag = True
    for j in range(len(s)//2):
        if s[j] != s[-1-j]:
            flag = False
            break
    
    if flag:
        print("YES")
    else:
        print("NO")