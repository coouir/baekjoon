A, B = input().split()
A, B = A[::-1], B[::-1]

if A > B:
    print(A)
else:
    print(B)