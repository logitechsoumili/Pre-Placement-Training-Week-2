# Problem 10: Count Zeros in a Sorted Matrix

**Problem Link:**  
https://www.geeksforgeeks.org/problems/count-zeros-in-a-sorted-matrix/1

## Problem Statement
Given a N X N binary Square Matrix where each row and column of the matrix is sorted in ascending order. Find the total number of zeros present in the matrix.
---

## Code

### ✅ C Code
Filename: [`solution.c`](./solution.c)

```c
#include <stdio.h>

int main(){
	int n;
	printf("Enter size of square matrix: ");
	scanf("%d", &n);
	int arr[n][n];

	printf("Enter matrix elements: ");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	int count = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (arr[i][j] == 0) count += 1;
		}
	}

	printf("Number of zeros: %d\n", count);

	return 0;
}
```

---

### ✅ Python Code
Filename: [`solution.py`](./solution.py)

```python
n = int(input("Enter size of square matrix: "))
print("Enter matrix elements row by row:")

arr = []
for _ in range(n):
    row = list(map(int, input().split()))
    arr.append(row)

count = 0
for row in range(n):
	for col in range(n):
		if arr[row][col] == 0:
			count += 1
print("Number of zeros:", count)
```