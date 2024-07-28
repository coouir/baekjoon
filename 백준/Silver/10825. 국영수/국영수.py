N = int(input())
arr = []

for i in range(N):
    name, a, b, c = input().split()
    arr.append([name, int(a), int(b), int(c)])

arr.sort(key=lambda stu: [-stu[1], stu[2], -stu[3], stu[0]])

for _ in range(N):
    print(arr[_][0])