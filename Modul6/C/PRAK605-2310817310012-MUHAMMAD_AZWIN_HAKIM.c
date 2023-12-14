#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int A[n][n];
    int B[n][n];

    printf("Matriks A\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Matriks B\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int AXB[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            AXB[i][j] = 0;
            for (int k = 0; k < n; k++) {
                AXB[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatriks AXB\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", AXB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
