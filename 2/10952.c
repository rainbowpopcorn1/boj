#include <stdio.h>
int main() {
    int x, y;
    int t = 1;
    while (t = 1) {
        scanf("%d %d", &x, &y);
        if (x == 0 && y == 0) {
            break;
        }
        printf("%d\n", x + y);
    }
}