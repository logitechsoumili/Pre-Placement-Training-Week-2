def is_identity(matrix):
    n = len(matrix)
    return all(matrix[i][j] == (1 if i == j else 0) for i in range(n) for j in range(n))

n = int(input())
matrix = [list(map(int, input().split())) for _ in range(n)]
if is_identity(matrix):
    print("Yes, Identity Matrix")
else:
    print("No, Not Identity")
