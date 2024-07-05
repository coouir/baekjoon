T = int(input())

for i in range(T):
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    a_s = [1, 2, 3, 3, 4, 10]
    b_s = [1, 2, 2, 2, 3, 5, 10]

    for p in range(7):
        if p == 6:
            b[p] = b[p] * b_s[p]
        else:
            a[p] = a[p] * a_s[p]
            b[p] = b[p] * b_s[p]
    if sum(a) > sum(b):
        print('Battle {}: Good triumphs over Evil'.format(i+1))
    elif sum(a) == sum(b):
        print('Battle {}: No victor on this battle field'.format(i+1))
    else:
        print('Battle {}: Evil eradicates all trace of Good'.format(i+1))
