N = sorted(list(input()), reverse=True)

if sum(map(int, N))%3 == 0 and "0" in N:
    print(''.join(N))
else:
    print(-1)