import numpy as np

n = int(input("Enter size of square matrix: "))

print("Enter elements one row at a time:")
arr = []
for _ in range(n):
	row = [int(x) for x in input().split()]
	arr.append(row)

print("Sum of diagonals:", np.trace(arr))