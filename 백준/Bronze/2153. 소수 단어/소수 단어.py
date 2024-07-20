string = input()
s = 0

# a : 97

for i in range(len(string)):
    if ord('a') <= ord(string[i]) <= ord('z'):
        s += ord(string[i])-96
    elif ord('A') <= ord(string[i]) <= ord('Z'):
        s += ord(string[i])-38
    
check = True
for i in range(2, s):
    if s%i == 0:
        check = False

if check:
    print("It is a prime word.")
else:
    print("It is not a prime word.")