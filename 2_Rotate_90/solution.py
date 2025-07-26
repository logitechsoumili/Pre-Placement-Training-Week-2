import numpy as np

n = int(input("Enter size of square matrix: "))
print("Enter matrix elements row by row:")

arr = []
for _ in range(n):
    row = list(map(int, input().split()))
    arr.append(row)

matrix = np.array(arr)

print("Original matrix:")
print(matrix)

rotated = np.rot90(matrix)

print("Result:")
print(rotated)