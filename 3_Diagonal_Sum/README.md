# Problem 3: Sum of diagonals

**Problem Link:**  
https://www.geeksforgeeks.org/problems/sum-of-diagonals-1587115621/1

## Problem Statement
Given a square of matrix M of size N*N. Your task is to compute and return sum of principal diagonal elements of matrix. You have to complete the function diagonalSum() which accepts N (size of matrix, N*N) and matrix M[ ][ ] as arguments.

---

## Code

### ✅ C Code
Filename: [`solution.c`](./solution.c)

```c
#include <stdio.h>

int sumDiagonal(int N, int M[][N]) {
    int sum = 0;
    for (int i = 0; i < N; i++){
        sum += M[i][i];
    }
    return sum;
}

int main(){
	int N;
	printf("Enter size of square matrix: ");
	scanf("%d", &N);
	int M[N][N];

	printf("Enter matrix elements one by one:\n");
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			scanf("%d", &M[i][j]);
		}
	}

	printf("Sum of diagonals: %d\n", sumDiagonal(N, M));

	return 0;
}
```

---

### ✅ Python Code
Filename: [`solution.py`](./solution.py)

```python
import numpy as np

n = int(input("Enter size of square matrix: "))

print("Enter elements one row at a time:")
arr = []
for _ in range(n):
	row = [int(x) for x in input().split()]
	arr.append(row)

print("Sum of diagonals:", np.trace(arr))
```