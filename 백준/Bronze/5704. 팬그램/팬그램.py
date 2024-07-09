while True:
    string = input()
    if string != "*":
        string = set(string)
        if len(string) == 27:
            print("Y")
        elif len(string) == 26:
            check = True
            for i in string:
                if i == " ":
                    check = False
                    break
            if check:
                print("Y")
            else:
                print("N")
        else:
            print("N")
    else:
        break