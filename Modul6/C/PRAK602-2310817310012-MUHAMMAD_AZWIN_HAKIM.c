#include <stdio.h>

int main() {
    int Ruangan;
    scanf("%d", &Ruangan);

    int Zetsu[Ruangan];
    for (int i = 0; i < Ruangan; i++){
        scanf("%d", &Zetsu[i]);
    }printf("\n");
    
    for (int i = 0; i < Ruangan; i++){
        printf("%d ",  Zetsu[i] * (i + 1));
    }
    return 0;
}