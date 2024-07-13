S, K, H = map(int, input().split())

if S+K+H >= 100:
    print('OK')
else:
    if S > K:
        if K > H:
            print('Hanyang')
        else:
            print('Korea')
    else:
        if S > H:
            print('Hanyang')
        else:
            print('Soongsil')