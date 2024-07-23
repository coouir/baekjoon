while True:
    string = input()
    if string == '.':
        break
    else:
        string = list(string)
        l = []
        for i in range(len(string)):
            if string[i] in ['(', ')', '[', ']']:
                if len(l) == 0:
                    l.append(string[i])
                else:
                    if l[-1] == '(' and string[i] == ')':
                        l.pop()
                    elif l[-1] == '[' and string[i] == ']':
                        l.pop()
                    else:
                        l.append(string[i])
        if len(l) == 0:
            print("yes")
        else:
            print("no")
