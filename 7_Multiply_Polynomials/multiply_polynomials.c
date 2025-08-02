#include <stdio.h>
void multiply(int A[], int B[], int m, int n) {
    int result[200] = {0};
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            result[i + j] += A[i] * B[j];
    for (int i = 0; i < m + n - 1; i++)
        printf("%d ", result[i]);
}
int main() {
    int m, n;
    scanf("%d", &m);
    int A[100];
    for (int i = 0; i < m; i++) scanf("%d", &A[i]);
    scanf("%d", &n);
    int B[100];
    for (int i = 0; i < n; i++) scanf("%d", &B[i]);
    multiply(A, B, m, n);
    return 0;
}
