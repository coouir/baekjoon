N, M = map(int, input().split())
arr = []

for i in range(N):
    arr.append(list(input()))

# BBBBBBBBWBWBW
# BBBBBBBBBWBWB
# BBBBBBBBWBWBW
# BBBBBBBBBWBWB
# BBBBBBBBWBWBW
# BBBBBBBBBWBWB
# BBBBBBBBWBWBW
# BBBBBBBBBWBWB
# WWWWWWWWWWBWB
# WWWWWWWWWWBWB
# (13-8)+1
# (10-8)+1
cnt = []

for i in range(N-7):
    for j in range(M-7):
        c1, c2 = 0, 0

        inde1 = 1 #흰색
        # if arr[i][j] == 'W':
        #     inde1 = 1 # 흰색 > 1
        # else:
        #     inde1 = 0 # 검은색 > 0
        inde2 = 0 # 검은색

        for n in range(i, i+8):
            for m in range(j, j+8):

                if m != j:
                    if inde1 == 1:
                        inde1 = 0
                    else:
                        inde1 = 1
                    if inde2 == 1:
                        inde2 = 0
                    else:
                        inde2 = 1

                if arr[n][m] == 'W':
                    if inde1 == 0:
                        c1 += 1
                    if inde2 == 0:
                        c2 += 1
                else:
                    if inde1 == 1:
                        c1 += 1
                    if inde2 == 1:
                        c2 += 1
        cnt.append(min(c1, c2))
print(min(cnt))