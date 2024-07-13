N = input()
number = [0] * 10
for i in N:
    if int(i) in [6,9]:
        if number[6] < number[9]:
            number[6] += 1
        else:
            number[9] += 1
    else:        
        number[int(i)] += 1

print(max(number))