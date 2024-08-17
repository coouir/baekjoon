h1, m1, s1 = map(int, input().split(':'))
h2, m2, s2 = map(int, input().split(':'))

h = h2-h1
m = m2-m1
s = s2-s1

if s < 0:
    m -= 1
    s += 60

if m < 0:
    h -= 1
    m += 60

if h < 0:
    h += 24

if h < 10:
    h = "0"+str(h)
if m < 10:
    m = "0"+str(m)
if s < 10:
    s = "0"+str(s)

if h1 == h2 and m1 == m2 and s1 == s2:
    print("24:00:00")
else:
    print("{}:{}:{}".format(h, m, s))