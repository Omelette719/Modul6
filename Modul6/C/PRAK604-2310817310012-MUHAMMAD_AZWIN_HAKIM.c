#include <stdio.h>
#include <string.h>

int main() {
    char baris1[100], baris2[100], hasil[100];
    int bintang = 0, pagar = 0;

    printf(""); gets(baris1);
    printf(""); gets(baris2);

    if (strlen(baris1) != strlen(baris2)) {
        printf("\nPanjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    for (int i = 0; baris1[i] && baris2[i]; i++) {
        if (baris1[i] == ' ' && baris2[i] == ' ') {
            hasil[i] = ' ';
        } else {
            hasil[i] = (baris1[i] == baris2[i]) ? '*' : '#';
            (hasil[i] == '*') ? bintang++ : pagar++;
        }
    }

    hasil[bintang + pagar] = '\0';
    printf("\n%s\n* = %d\n# = %d\n%s\n", hasil, bintang, pagar, (bintang >= pagar) ? "Pesan Asli" : "Pesan Palsu");

    return 0;
}
