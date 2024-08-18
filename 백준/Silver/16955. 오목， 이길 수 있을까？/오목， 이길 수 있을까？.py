input = __import__('sys').stdin.readline
board = []

for i in range(10) :
    board.append(list(input().rstrip()))

def check_left (y, x) :
    x_check = 0
    if x > 0 and board[y][x-1] == 'X':
        x_check += 1
        x_check = x_check + check_left(y, x-1)
    return x_check

def check_right (y, x) :
    x_check = 0
    if x < 9 and board[y][x+1] == 'X':
        x_check += 1
        x_check = x_check + check_right(y, x+1)
    return x_check

def check_up (y, x) :
    x_check = 0
    if y > 0 and board[y-1][x] == 'X':
        x_check += 1
        x_check = x_check + check_up(y-1, x)
    return x_check

def check_down (y, x) :
    x_check = 0
    if y < 9 and board[y+1][x] == 'X':
        x_check += 1
        x_check = x_check + check_down(y+1, x)
    return x_check

def check_upleft (y, x) :
    x_check = 0
    if (y > 0 and x > 0) and board[y-1][x-1] == 'X':
        x_check += 1
        x_check = x_check + check_upleft(y-1, x-1)
    return x_check

def check_upright (y, x) :
    x_check = 0
    if (y > 0 and x < 9) and board[y-1][x+1] == 'X':
        x_check += 1
        x_check = x_check + check_upright(y-1, x+1)
    return x_check

def check_downleft (y, x) :
    x_check = 0
    if (y < 9 and x > 0) and board[y+1][x-1] == 'X':
        x_check += 1
        x_check = x_check + check_downleft(y+1, x-1)
    return x_check

def check_downright (y, x) :
    x_check = 0
    if (y < 9 and x < 9) and board[y+1][x+1] == 'X':
        x_check += 1
        x_check = x_check + check_downright(y+1, x+1)
    return x_check

flag = False

for i in range(10) :
    for j in range(10) :
        if board[i][j] == '.' :
            if check_left(i,j) + check_right(i,j) >= 4 :
                print(1)
                flag = True
                break
            elif check_up(i,j) + check_down(i,j) >= 4 :
                print(1)
                flag = True
                break
            elif check_upleft(i,j) + check_downright(i,j) >= 4 :
                print(1)
                flag = True
                break
            elif check_upright(i,j) + check_downleft(i,j) >= 4 :
                print(1)
                flag = True
                break
    if flag :
        break

if not flag :
    print(0)