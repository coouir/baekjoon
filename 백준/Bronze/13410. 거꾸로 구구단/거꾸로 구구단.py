N, K = map(int, input().split())

numbers = []

for i in range(1, K+1):
    numbers.append(int(str(N*i)[::-1]))

numbers = sorted(numbers, reverse=True)
print(numbers[0])