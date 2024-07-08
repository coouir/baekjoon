T = int(input())

for i in range(T):
    ox = tuple(input())
    sum = 0

    for i in range(len(ox)):
        for j in range(i, -1, -1):
            if ox[j] == "O":
                sum += 1
            else:
                break
    print(sum)
