string = input()
flag = True

for i in range(len(string)//2):
    if string[i] != string[-1-i]:
        flag = False
        break

if flag:
    print('true')
else:
    print('false')