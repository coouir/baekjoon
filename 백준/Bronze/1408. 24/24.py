nh, nm, ns = map(int, input().split(":"))
sh, sm, ss = map(int, input().split(":"))

h = sh-nh
m = sm-nm
s = ss-ns

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

print("{}:{}:{}".format(h, m, s))