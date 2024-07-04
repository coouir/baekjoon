N, W, H, L = map(int, input().split())

if (W // L) * (H // L) > N:
    print(N)
else:
    print((W // L) * (H // L))