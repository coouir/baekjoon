N = int(input())
string = input()

l = []

for i in range(0, len(string), 6):
    L = [
    ["A", "000000", 0], 
    ["B", "001111", 0], 
    ["C", "010011", 0], 
    ["D", "011100", 0],
    ["E", "100110", 0],
    ["F", "101001", 0],
    ["G", "110101", 0],
    ["H", "111010", 0]
    ]

    s = string[i:i+6]
    for j in range(6):
        for _ in range(len(L)):
            # print(s[j],L[_][1][j], end=' ')
            if s[j] != L[_][1][j]:
                L[_][2] += 1
                # C[_] += 1
    #     print()
    # print(L)
    check = False
    for a in range(len(L)):
        if L[a][2] <= 1:
            l.append(L[a][0])
            check = True
            break
    if check == False:
        print((i//6)+1)
        exit()

print(''.join(l))