# function
def f(s):
    if len(s) == 0:
        return True
     
    fl = len(s) # 변경 전 s의 길이
    for i in range(len(s)-1):
        if s[i] + s[i+1] == '()':
            s.pop(i); s.pop(i)
            break
    if fl == len(s): # 변경 전 s와 변경 후 s의 길이 비교
        return False

    return f(s)

# main
T = int(input())

for i in range(T):
    s = list(input())
    if f(s):
        print('YES')
    else:
        print('NO')