n = int(input("Enter size of square matrix: "))
print("Enter matrix elements row by row:")

arr = []
for _ in range(n):
    row = list(map(int, input().split()))
    arr.append(row)

count = 0
for row in range(n):
	for col in range(n):
		if arr[row][col] == 0:
			count += 1
print("Number of zeros:", count)