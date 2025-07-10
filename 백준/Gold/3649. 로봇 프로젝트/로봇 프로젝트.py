import sys
input = sys.stdin.readline

while True:
    try:
        x = int(input()) * 10000000

        n = int(input())
        arr = [int(input()) for _ in range(n)]
        arr.sort()

        check = True
        s, e = 0, n-1
        while s < e:
            # 정답 확인 코드
            if arr[s] + arr[e] == x:
                print(f"yes {arr[s]} {arr[e]}")
                check = False
                break
                
            # 이동 코드 
            if arr[s] + arr[e] > x:
                e -= 1
            else:
                s += 1

        if check:
            print("danger")

    except:
        break