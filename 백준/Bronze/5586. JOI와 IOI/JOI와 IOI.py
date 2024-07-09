string = input()

cntJ = 0
cntI = 0

for i in range(len(string)):
    if not(i == 0 or i == len(string)-1):
        if string[i-1]+string[i]+string[i+1] == "JOI":
            cntJ +=1
        elif string[i-1]+string[i]+string[i+1] == "IOI":
            cntI += 1

print(cntJ)
print(cntI)
        