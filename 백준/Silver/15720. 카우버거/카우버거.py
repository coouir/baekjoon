B, C, D = map(int, input().split())
arrB = sorted(list(map(int, input().split())), reverse=True)
arrC = sorted(list(map(int, input().split())), reverse=True)
arrD = sorted(list(map(int, input().split())), reverse=True)

print(sum(arrB+arrC+arrD))
print(int(sum(arrB[:min(B, C, D)])*0.9+sum(arrC[:min(B, C, D)])*0.9+sum(arrD[:min(B, C, D)])*0.9+sum(arrB[min(B, C, D):])+sum(arrC[min(B, C, D):])+sum(arrD[min(B, C, D):])))