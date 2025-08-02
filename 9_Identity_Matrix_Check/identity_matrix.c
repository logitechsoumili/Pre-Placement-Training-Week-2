#include <stdio.h>
#include <stdbool.h>
bool isIdentity(int matrix[100][100], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0))
                return false;
        }
    return true;
}
int main() {
    int n;
    scanf("%d", &n);
    int matrix[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    if (isIdentity(matrix, n))
        printf("Yes, Identity Matrix\n");
    else
        printf("No, Not Identity\n");
    return 0;
}
