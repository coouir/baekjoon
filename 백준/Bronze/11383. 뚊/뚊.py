N, M = map(int, input().split())
arr = []
check = True

for i in range(N):
    s = input()
    string = ''
    for c in s:
        string += c*2
    arr.append(string)

for i in range(N):
    if arr[i] != input():
        check = False

if check:
    print("Eyfa")
else:
    print("Not Eyfa")