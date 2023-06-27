#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int y = 1; y < N + 1; y++) {
        for (int x1 = 0; x1 < N - y; x1++) {
            printf(" ");
        }
        for (int x2 = 0; x2 < y; x2++) {
            printf("*");
        }
        printf("\n");
    }
}