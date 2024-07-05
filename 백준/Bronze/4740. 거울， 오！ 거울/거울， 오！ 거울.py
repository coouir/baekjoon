while True:
    string = input()
    if string == '***':
        break
    else:
        print(string[::-1])