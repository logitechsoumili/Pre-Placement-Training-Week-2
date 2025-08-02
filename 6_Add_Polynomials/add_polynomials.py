def add_polynomials(poly1, poly2):
    return [a + b for a, b in zip(poly1, poly2)]

n = int(input())
poly1 = list(map(int, input().split()))
poly2 = list(map(int, input().split()))
print(*add_polynomials(poly1, poly2))
