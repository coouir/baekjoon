import math
input = __import__('sys').stdin.readline

A, B = map(int, input().split())
print(math.gcd(A, B)*'1')