S1, S2 = map(int, input().split())
check_sample = True
check_system = True
for i in range(S1):
    a, b = map(int, input().split())
    if a != b:
        check_sample = False

for i in range(S2):
    a, b = map(int, input().split())
    if a != b:
        check_system = False

if check_sample == True and check_system == True:
    print("Accepted")
elif check_sample == False:
    print("Wrong Answer")
else:
    print("Why Wrong!!!")