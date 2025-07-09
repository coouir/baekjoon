N = int(input())
n = (N%10)*10 + (N//10 + N%10)%10

cnt = 1
while N != n:
    n = (n%10)*10 + (n//10 + n%10)%10
    cnt += 1

print(cnt)