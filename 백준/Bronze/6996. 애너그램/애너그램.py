
T = int(input())

for i in range(T):
    A, B = input().split()
    
    a = {}
    for j in range(26):
        a[j+97] = 0
    for p in A:
        a[ord(p)] += 1
    
    for q in B:
        a[ord(q)] -= 1
    
    check = True
    for m in a:
        if a[m] < 0:
            check = False
            break
    
    if check and len(A)==len(B):
        print("{} & {} are anagrams.".format(A, B))
    else:
        print("{} & {} are NOT anagrams.".format(A, B))