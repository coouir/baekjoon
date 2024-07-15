T = int(input())

for i in range(T):
    l = list(set(input()))
    S = (65+90)*13
    for j in l:
        S-= ord(j)
    print(S)
