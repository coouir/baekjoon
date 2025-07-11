while True:
    m = int(input())
    if m == 0:
        break
    str = input()
        
    L = len(str)
    str += " "
    arr = [0 for i in range(1000)]
    arr[ord(str[0])] = 1

    cnt, answer = 1, 0
    s = 0
    e = 0
    while s < L and e < L:
        # 정답 확인 코드
        if cnt <= m:
            answer = max(answer, e-s+1)
        # 이동 코드
        if cnt <= m:
            e += 1
            arr[ord(str[e])] += 1
            if arr[ord(str[e])] == 1:
                cnt += 1

        else:
            arr[ord(str[s])] -= 1
            if arr[ord(str[s])] == 0:
                cnt -= 1
            s += 1

    print(answer)
