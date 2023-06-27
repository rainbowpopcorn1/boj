#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    for (int i = 1; i < t + 1; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", i, A + B);
    }
}
