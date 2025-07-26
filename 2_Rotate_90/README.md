# Problem 2: Rotate by 90 degree

**Problem Link:**  
https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1

## Problem Statement
Given a square matrix mat[][] of size n x n. The task is to rotate it by 90 degrees in an anti-clockwise direction without using any extra space.

---

## Code

### ✅ C Code
Filename: [`solution.c`](./solution.c)

```c
#include <stdio.h>

int main(){
	int m, n;
	printf("Enter size of square matrix: ");
	scanf("%d", &n);
	int arr[n][n];

	printf("Enter matrix elements: ");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	printf("Original matrix:\n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	printf("Result:\n");
	for (int i = n - 1; i >= 0; i--){
		for (int j = 0; j < n; j++){
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
```