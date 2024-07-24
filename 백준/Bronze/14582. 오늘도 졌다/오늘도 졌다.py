O = list(map(int, input().split()))
S = list(map(int, input().split()))

check = False
for i in range(len(O)):
    S.pop()
    if sum(S) < sum(O):
        check = True
        break
    O.pop()

if check:
    print("Yes")
else:
    print("No")