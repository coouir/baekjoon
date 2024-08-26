S = input()
if S[0] == "x":
    print(1)
elif S[:2] == "-x":
    print(-1)
else:
    if "x" in S:
        print(S[:S.index("x")])
    else:
        print(0)