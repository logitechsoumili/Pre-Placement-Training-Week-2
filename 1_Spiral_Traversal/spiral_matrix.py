def spirally_traverse(matrix):
    top, left = 0, 0
    bottom, right = len(matrix)-1, len(matrix[0])-1
    result = []
    while top <= bottom and left <= right:
        for i in range(left, right+1):
            result.append(matrix[top][i])
        top += 1
        for i in range(top, bottom+1):
            result.append(matrix[i][right])
        right -= 1
        if top <= bottom:
            for i in range(right, left-1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1
        if left <= right:
            for i in range(bottom, top-1, -1):
                result.append(matrix[i][left])
            left += 1
    return result

r, c = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(r)]
print(*spirally_traverse(matrix))
