while True:
    try:
        n, k = map(int, input().split())

        s = n

        while n >= k:
            s += n//k
            n = n//k + n%k
        
        print(s)

    except EOFError:
        break