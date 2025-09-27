#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int baris = 1; baris < N; baris++) {
        for (int spasi = 0; spasi < N - baris - 1; spasi++) {
            printf(" ");
        }
        for (int bintang = 0; bintang < 2 * baris - 1; bintang++) {
            printf("*");
        }
        printf("\n");
    }
    for (int spasi = 0; spasi < N - 2; spasi++) {
        printf(" ");
    }
    printf("*\n");

    return 0;
}