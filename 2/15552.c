#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while (t--) {
        int A, B;
        scanf("%d %d", &A, &B);
        printf("%d\n", A + B);
    }
}
