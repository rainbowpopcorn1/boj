#include <stdio.h>
int main() {
    int X, N;
    scanf("%d\n%d", &X, &N);

    int cnt = 0;
    while (N--) {
        int a, b;
        scanf("%d %d", &a, &b);
        cnt += a * b;
    }
    if (cnt == X) {
        printf("Yes");
    }
    else {
        printf("No");
    }
}