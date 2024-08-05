V = int(input())
v = input()

cA, cB = 0, 0

for i in v:
    if i == 'A':
        cA += 1
    else:
        cB += 1

if cA > cB:
    print('A')
elif cA == cB:
    print('Tie')
else:
    print('B')