string = input()
k = input()

inde = 0 
for i in string:
    if i.isalpha():
        if ord(i)-(ord(k[inde])-96) > 96:
            print(chr(ord(i)-(ord(k[inde])-96)), end='')
        else:
            print(chr(ord(i)-(ord(k[inde])-96)+26), end='')
    else:
        print(' ',end='')
    
    inde += 1
    if inde == len(k):
        inde = 0