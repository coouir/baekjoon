N, B, W = map(int, input().split())
str = input()
L = len(str)
str += " "

answer = 0
cntB, cntW = 0, 0
if str[0] == "W":
    cntW += 1
else:
    cntB += 1

s = 0
e = 0
while e < L:
    # 정답 확인 코드
    if cntB <= B and cntW >= W:
        answer = max(answer, e-s+1)

    # 이동 코드
    if cntB <= B:
        e += 1
        if str[e] == "W":
            cntW += 1
        else:
            cntB += 1
    else:
        if str[s] == "W":
            cntW -= 1
        else:
            cntB -= 1
        s += 1

print(answer)