H, M, S = map(int, input().split())
D = int(input())

R = ((H*3600) + (M*60) + (S) + D)%86400

H = R//3600
M = (R%3600)//60
S = (R%3600)%60

print(H, M, S)