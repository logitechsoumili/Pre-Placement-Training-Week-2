#include <stdio.h>
#include <stdbool.h>
bool isSparse(int matrix[100][100], int r, int c) {
    int count = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (matrix[i][j] == 0) count++;
    return count > (r * c) / 2;
}
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int matrix[100][100];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &matrix[i][j]);
    if (isSparse(matrix, r, c))
        printf("Yes, Sparse Matrix\n");
    else
        printf("No, Not Sparse\n");
    return 0;
}
