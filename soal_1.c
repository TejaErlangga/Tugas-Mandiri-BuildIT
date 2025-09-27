#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int X[1000];     
    int total = 0;  
    int max = -1;    

    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
        total += X[i];
        if (X[i] > max) {
            max = X[i];
        }
    }

    int count = 0;
    int days[1000];
    for (int i = 0; i < N; i++) {
        if (X[i] == max) {
            days[count] = i + 1;
            count++;
        }
    }

    double percentage = ( (double)(max * count) / total ) * 100.0;

    printf("Max : %d\n", max);
    printf("Count : %d\n", count);
    printf("days :");
    for (int i = 0; i < count; i++) {
        printf(" %d", days[i]);
    }
    printf("\n");
    printf("Percentage : %.3f%%\n", percentage);

    return 0;
}