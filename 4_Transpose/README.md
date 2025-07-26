# Problem 4: Transpose of a matrix

**Problem Link:**  
https://www.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1

## Problem Statement
You are given a square matrix of size n x n. Your task is to find the transpose of the given matrix.

---

## Code

### ✅ C Code
Filename: [`solution.c`](./solution.c)

```c
#include <stdio.h>

int main(){
	int m, n;
	printf("Enter number of rows and columns: ");
	scanf("%d %d", &m, &n);
	int arr[m][n];

	printf("Enter matrix elements: ");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	printf("Original matrix:\n");
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("Transpose of matrix:\n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}

	return 0;
}
```

---

### ✅ Python Code
Filename: [`solution.py`](./solution.py)

```python
import numpy as np

m, n = map(int, input("Enter number of rows and columns: ").split())

print("Enter elements one row at a time:")
arr = []
for _ in range(m):
	row = [int(x) for x in input().split()]
	arr.append(row)

print(np.transpose(arr))
```