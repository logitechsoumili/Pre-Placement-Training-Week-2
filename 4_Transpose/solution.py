import numpy as np

m, n = map(int, input("Enter number of rows and columns: ").split())

print("Enter elements one row at a time:")
arr = []
for _ in range(m):
	row = [int(x) for x in input().split()]
	arr.append(row)

print(np.transpose(arr))