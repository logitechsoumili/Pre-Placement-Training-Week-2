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