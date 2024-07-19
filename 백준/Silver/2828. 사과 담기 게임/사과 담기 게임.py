# 바구니 옮기는 게임
# 스크린 : N칸, 바구니 : M칸 차지
# 사과의 개수 : J
# N : 5, M : 15
# O O O O O
# 1 > 3 > 5 > 1
#
# N : 5, M : 2
# O O O O O 


N, M = map(int, input().split())
J = int(input())

l = 1
r = l+M-1

s = 0

for i in range(J):
    n = int(input())
    if not(l <= n <= r):
        if r < n:
            d = n-r
            s += d
            l += d; r += d
        else:
            d = l-n
            s += d
            l -= d; r -= d
            
print(s)