def is_sparse(matrix):
    zeroes = sum(row.count(0) for row in matrix)
    return zeroes > (len(matrix) * len(matrix[0])) / 2

r, c = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(r)]
if is_sparse(matrix):
    print("Yes, Sparse Matrix")
else:
    print("No, Not Sparse")
