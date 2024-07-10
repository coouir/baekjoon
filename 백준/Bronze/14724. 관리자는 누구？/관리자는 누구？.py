N = int(input())

D = {
    "PROBRAIN" : 0,
    "GROW" : 0, 
    "ARGOS" : 0, 
    "ADMIN" : 0, 
    "ANT" : 0, 
    "MOTION" : 0, 
    "SPG" : 0, 
    "COMON" : 0, 
    "ALMIGHTY" : 0
}
keysD = list(D.keys())

for i in range(9):
    nList = list(map(int, input().split()))
    D[keysD[i]] = max(nList)

valuesD = list(D.values())

print(keysD[valuesD.index(max(valuesD))])