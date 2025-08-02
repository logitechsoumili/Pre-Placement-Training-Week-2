def dynamicArray(n, queries):
    seq = [[] for _ in range(n)]
    lastAnswer = 0
    result = []
    for q in queries:
        t, x, y = q
        idx = (x ^ lastAnswer) % n
        if t == 1:
            seq[idx].append(y)
        else:
            lastAnswer = seq[idx][y % len(seq[idx])]
            result.append(lastAnswer)
    return result

# main
n, q = map(int, input().split())
queries = [list(map(int, input().split())) for _ in range(q)]
res = dynamicArray(n, queries)
print(*res)