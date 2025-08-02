#include <stdio.h>
void addPoly(int poly1[], int poly2[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", poly1[i] + poly2[i]);
}
int main() {
    int n;
    scanf("%d", &n);
    int poly1[100], poly2[100];
    for (int i = 0; i < n; i++) scanf("%d", &poly1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &poly2[i]);
    addPoly(poly1, poly2, n);
    return 0;
}
