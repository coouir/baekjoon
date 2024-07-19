L = int(input()) # 롤케익의 길이
L_list = [0] * (L+1)
N_list = [0]
N_list_2 = [0]

N = int(input()) # 방청객의 수
for i in range(N):
    P, K = map(int, input().split())
    N_list.append(K-P)
    for j in range(P, K+1):
        if L_list[j] == 0:
            L_list[j] = i+1
    
print(N_list.index(max(N_list)))
for p in range(1, N+1):
    N_list_2.append(L_list.count(p))
print(N_list_2.index(max(N_list_2)))