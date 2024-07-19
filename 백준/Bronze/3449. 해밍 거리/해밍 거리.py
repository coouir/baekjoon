T = int(input())
for i in range(T):
    cnt = 0

    f = input()
    s = input()

    for j in range(len(f)):
        if f[j] != s[j]:
            cnt += 1
    
    print("Hamming distance is {}.".format(cnt))