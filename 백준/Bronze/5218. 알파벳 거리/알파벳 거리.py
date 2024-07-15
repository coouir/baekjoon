T = int(input())

for i in range(T):
    F, S = input().split()
    print("Distances: ", end='')
    for j in range(len(F)):
        if ord(S[j]) >= ord(F[j]):
            print(ord(S[j]) - ord(F[j]), end=' ')
        else:
            print(ord(S[j])+26-ord(F[j]), end=' ')
    print()
