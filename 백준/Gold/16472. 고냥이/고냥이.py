N = int(input())

str = input()
l = len(str)
str += 'a'

arr = [0 for i in range(26)]
arr[ord(str[0])-97] = 1

answer = 0
cnt = 1

s = 0
e = 0
while e < l:
    # 정답 확인 코드
    if cnt <= N:
        answer = max(answer, e-s+1)

    # 이동 코드
    if cnt <= N:
        e += 1
        idx = ord(str[e])-97
        arr[idx] += 1
        if arr[idx] == 1:
            cnt += 1
    else:
        idx = ord(str[s])-97
        arr[idx] -= 1
        if arr[idx] == 0:
            cnt -= 1
        s += 1

print(answer)