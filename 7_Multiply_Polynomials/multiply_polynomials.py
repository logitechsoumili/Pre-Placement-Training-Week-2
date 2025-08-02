def multiply_polynomials(A, B):
    result = [0] * (len(A) + len(B) - 1)
    for i in range(len(A)):
        for j in range(len(B)):
            result[i + j] += A[i] * B[j]
    return result

m = int(input())
A = list(map(int, input().split()))
n = int(input())
B = list(map(int, input().split()))
print(*multiply_polynomials(A, B))
