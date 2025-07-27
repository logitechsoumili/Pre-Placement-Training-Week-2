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