N = int(input())
s_list = list(input())

for i in range(N//2):
    if s_list[i] == '?':
        if s_list[-1-i] != '?':
            s_list[i] = s_list[-1-i]
        else:
            s_list[i] = s_list[-1-i] = 'a'
    else:
        s_list[-1-i] = s_list[i]
        
if N%2 == 1 and s_list[(N-1)//2] == '?':
    s_list[(N-1)//2] = 'a'

print(''.join(s_list))