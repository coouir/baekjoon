input = __import__('sys').stdin.readline

N, M, R = map(int, input().split())
arr = []
for i in range(N):
    arr.append(list(map(int, input().split())))

Q = list(map(int, input().split()))
for i in range(R):
    if Q[i] == 1:
        for j in range(len(arr)//2):
            arr[j], arr[-1-j] = arr[-1-j], arr[j]
    elif Q[i] == 2:
        for p in range(len(arr)):
            for q in range(len(arr[0])//2):
                arr[p][q], arr[p][-1-q] = arr[p][-1-q], arr[p][q]
    elif Q[i] == 3:
        li = []
        for q in range(len(arr[0])):
            l = []
            for p in range(len(arr)):
                l.append(arr[-1-p][q])
            li.append(l)
        arr = li
    elif Q[i] == 4:
        li = []
        for q in range(len(arr[0])):
            l = []
            for p in range(len(arr)):
                l.append(arr[p][-1-q])
            li.append(l)
        arr = li
    elif Q[i] == 5:
        l = []
        for x in range(len(arr)):
            l.append([0 for i in range(len(arr[0]))])
        
        for p in range(len(arr)):
            for q in range(len(arr[0])):
                if p < len(arr)//2:
                    if q < len(arr[0])//2: #1
                        l[p][q+len(arr[0])//2] = arr[p][q]
                    else: #2
                        l[p+len(arr)//2][q] = arr[p][q]
                else:
                    if q < len(arr[0])//2:
                        l[p-len(arr)//2][q] = arr[p][q]
                    else: #4
                        l[p][q-len(arr[0])//2] = arr[p][q]
        
        arr = l
    elif Q[i] == 6:
        l = []
        for x in range(len(arr)):
            l.append([0 for i in range(len(arr[0]))])
        
        for p in range(len(arr)):
            for q in range(len(arr[0])):
                if p < len(arr)//2:
                    if q < len(arr[0])//2: #1
                        l[p+len(arr)//2][q] = arr[p][q]
                    else: #2
                        l[p][q-len(arr[0])//2] = arr[p][q]
                else:
                    if q < len(arr[0])//2:
                        l[p][q+len(arr[0])//2] = arr[p][q]
                    else:
                        l[p-len(arr)//2][q] = arr[p][q]

        arr = l
for i in range(len(arr)):
    print(' '.join(map(str, arr[i])))
