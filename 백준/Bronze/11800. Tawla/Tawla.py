p1 = {
    1 : "Yakk",
    2 : "Doh",
    3 : "Seh",
    4 : "Ghar",
    5 : "Bang",
    6 : "Sheesh"
}

p2 = {
    1 : "Habb Yakk",
    2 : "Dobara",
    3 : "Dousa",
    4 : "Dorgy",
    5 : "Dabash",
    6 : "Dosh"
}

T = int(input())
for i in range(T):
    a, b = map(int, input().split())

    if a == b:
        print("Case {}: {}".format(i+1, p2[a]))
    elif min(a, b) == 5 and max(a, b) == 6:
        print("Case {}: {}".format(i+1, "Sheesh Beesh"))
    else:
        if a > b:
            print("Case {}: {} {}".format(i+1, p1[a], p1[b]))
        else:
            print("Case {}: {} {}".format(i+1, p1[b], p1[a]))