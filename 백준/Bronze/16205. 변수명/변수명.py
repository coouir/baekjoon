n, string = input().split(); n = int(n)
word_list = []
if n == 1:
    #카멜 표기법
    print(string)

    cnt = 0
    for i in range(len(string)):
        if ord('A') <= ord(string[i]) <= ord('Z'):
            if cnt == 0:
                word_list.append(string[:i])
                cnt += 1
            word = string[i:]
            if word.isupper() == True and len(word) == 1:
                word_list.append(word.lower())
            for j in range(1, len(word)):
                if ord('A') <= ord(word[j]) <= ord('Z'):
                    word_list.append(word[:j].lower())
                    break
            if word[1::].islower() == True:
                word_list.append(word.lower())
    
    if string.islower() == True:
        word_list.append(string)
    #스네이크 표기법
    print('_'.join(word_list))
    #파스칼 표기법
    for p in range(len(word_list)):
        word_list[p] = word_list[p].title()
    print(''.join(word_list))

elif n == 2:
    word_list = string.split('_')

    #카멜 표기법
    for i in range(len(word_list)):
        if i == 0:
            print(word_list[i], end='')
        else:
            print(word_list[i].title(), end='')
    print()
    #스네이크 표기법
    print('_'.join(word_list))
    #파스칼 표기법 
    for p in range(len(word_list)):
        word_list[p] = word_list[p].title()
    print(''.join(word_list))

elif n == 3:
    for i in range(len(string)):
        if ord('A') <= ord(string[i]) <= ord('Z'):
            word = string[i:]
            if word.isupper() == True and len(word) == 1:
                word_list.append(word.lower())
            for j in range(1, len(word)):
                if ord('A') <= ord(word[j]) <= ord('Z'):
                    word_list.append(word[:j].lower())
                    break
            if word[1::].islower() == True:
                word_list.append(word.lower())

    #카멜 표기법
    for p in range(len(word_list)):
        if p == 0:
            print(word_list[p], end='')
        else:
            print(word_list[p].title(), end='')
    print()
    #스네이크 표기법
    print('_'.join(word_list))
    #파스칼 표기법
    for p in range(len(word_list)):
        word_list[p] = word_list[p].title()
    print(''.join(word_list))