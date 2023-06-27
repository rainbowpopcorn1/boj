#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);

    for (int i = 0; i < x / 4; i++) {
        printf("long ");
    }
    printf("int");
}