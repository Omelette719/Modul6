#include <stdio.h>

int main() {
    int matrix[10][10], baris, kolom;

    scanf("%d %d", &baris, &kolom);

    for (int i = 0; i < baris; i++){
        for (int j = 0; j < kolom; j++){
            scanf("%d", &matrix[i][j]);
        }
    }printf("\n");
    
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}