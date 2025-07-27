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
