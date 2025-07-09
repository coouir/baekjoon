cnt = 0

N = int(input())
for _ in range(N):
    str = input()
    n = len(str)

    check = True
    for i in range(n):
        for j in range(i+1, n):
            if str[i] != str[j]:
                for k in range(j+1, n):
                    if str[k] == str[i]:
                        check = False
                        break
    if check:
        cnt += 1

print(cnt)
