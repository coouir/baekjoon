S1, S2 = map(int, input().split())
check = True

for i in range(S1):
    a, b = map(int, input().split())
    if a != b:
        check = False

for i in range(S2):
    a, b = map(int, input().split())
    if a != b:
        check = False

if check:
    print("Accepted")
else:
    print("Wrong Answer")