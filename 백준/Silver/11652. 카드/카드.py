N = int(input())
D = {}

for i in range(N):
    n = int(input())
    if n not in D:
        D[n] = 1
    else:
        D[n] += 1

max = 0
for j in D.keys():
    if D[j] > max:
        max = D[j]

m_l = []
for k in D.keys():
    if D[k] == max:
        m_l.append(k)
m_l = sorted(m_l)
print(m_l[0])