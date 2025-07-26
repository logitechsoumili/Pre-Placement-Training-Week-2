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