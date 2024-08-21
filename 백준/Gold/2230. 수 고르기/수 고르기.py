n, m = map(int, input().split())
numbers = [int(input()) for _ in range(n)]
numbers.sort()

left, right = 0, 1	# left는 시작 위치, right는 두 번째 위치
min_diff = float('inf')	# 최소 차이

while right < n:
    current_diff = numbers[right] - numbers[left]	# 현재 두 포인터가 가리키는 값의 차이

    if current_diff >= m:
        min_diff = min(min_diff, current_diff)	# 차이가 m 이상이면 최소 차이 업데이트
        if left + 1 < right:
            left += 1	# left 포인터 오른쪽으로 이동
        else:
            right += 1	# left가 right 바로 앞에 있으면 둘 다 오른쪽으로 이동
            left += 1
    else:
        right += 1	# 차이가 m 미만이면 right 포인터를 오른쪽으로 이동(차이 증가)

print(min_diff)