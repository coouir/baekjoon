T = int(input())

for i in range(T):
    n = tuple(map(int, input().split()))
    HP = n[0] + n[4]
    MP = n[1] + n[5]
    A = n[2] + n[6]
    D = n[3] + n[7]

    if HP < 1:
        HP = 1
    if MP < 1:
        MP = 1
    if A < 0:
        A = 0
    
    print((1*HP)+(5*MP)+(2*A)+(2*D))