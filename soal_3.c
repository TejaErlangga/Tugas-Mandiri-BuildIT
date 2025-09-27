#include <stdio.h>
#include <string.h>

int main() {
    char kata[305][105]; 
    int jumlahkata = 0;

    while (scanf("%s", kata[jumlahkata]) != EOF) {
        int sudahada = 0;
        for (int i = 0; i < jumlahkata; i++) {
            if (strcmp(kata[i], kata[jumlahkata]) == 0) {
                sudahada = 1; 
                break;
            }
        }
        if (!sudahada) {
            if (jumlahkata > 0) printf(" ");
            printf("%s", kata[jumlahkata]);
        }
        jumlahkata++;
    }

    printf("\n");
    return 0;
}