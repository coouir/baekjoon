N = int(input())
arr = []
for i in range(N):
    age, name = input().split(); age = int(age)
    arr.append([age, name])

arr = sorted(arr, key=lambda x:[x[0]])
for i in range(len(arr)):
    print(' '.join(map(str, arr[i])))