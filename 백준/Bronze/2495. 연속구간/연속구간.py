for i in range(3):
    n = input()
    max = 0

    for p in range(len(n)):
        cnt = 1
        n_ = n[p::]
        for q in range(1, len(n_)):
            
            if n_[0] == n_[q]:
                cnt += 1
            else:
                break
        if cnt > max:
            max = cnt
    
    print(max)