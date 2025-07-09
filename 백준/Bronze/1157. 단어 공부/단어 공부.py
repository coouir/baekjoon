arr = [0 for i in range(26)]

str = input().upper()
for i in range(len(str)):
    arr[ord(str[i])-65] += 1

for i in range(26):
    if arr[i] == max(arr):
        for j in range(i+1, 26):
            if arr[j] == arr[i]:
                print("?")
                exit()
        print(chr(65+i))
        exit() 