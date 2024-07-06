# function
def function(s):
    if len(s) == 0:
        return
     
    fl = len(s)
    for i in range(len(s)-1):
        if s[i] + s[i+1] == '()':
            s.pop(i); s.pop(i)
            break
    if fl == len(s):
        return

    return function(s)

# main
T = int(input())

for i in range(T):
    string = input()
    sList = list(string)

    function(sList)
    if len(sList) == 0:
        print('YES')
    else:
        print('NO')