N = int(input())

n = sorted(list(set(list(map(int, input().split())))))
print(*n)