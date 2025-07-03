n = int(input())

answer = 0
answerArr = []
for _ in range(n):
    L = int(input())
    arr = [0] + list(map(int, input().split()))
    prefix = [0 for i in range(L+1)]

    for i in range(1, L+1):
        prefix[i] = arr[i] + prefix[i-1]
    
    M = -(1<<60)
    x1, x2 = -1, 100000
    for i in range(1, L+1):
        for j in range(i, L+1):
            if M < (prefix[j] - prefix[i-1]):
                M = prefix[j] - prefix[i-1]
                x1, x2 = i, j
            elif M == (prefix[j] - prefix[i-1]) and (j-i < x2-x1):
                x1, x2 = i, j

                    
    answer += M
    answerArr.append([x1, x2])

print(answer)
for i in range(n):
    print(*answerArr[i])