from itertools import combinations_with_replacement as cbwr 

N, M = map(int, input().split())
arr = [i for i in range(1, N+1)]

for t in cbwr(arr, M):
    print(' '.join(map(str, t)))