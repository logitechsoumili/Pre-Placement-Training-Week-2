#include <stdio.h>
void spirallyTraverse(int r, int c, int matrix[100][100]) {
    int top = 0, bottom = r - 1, left = 0, right = c - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) printf("%d ", matrix[top][i]);
        top++;
        for (int i = top; i <= bottom; i++) printf("%d ", matrix[i][right]);
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) printf("%d ", matrix[bottom][i]);
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) printf("%d ", matrix[i][left]);
            left++;
        }
    }
}
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int matrix[100][100];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &matrix[i][j]);
    spirallyTraverse(r, c, matrix);
    return 0;
}
