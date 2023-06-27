#include <stdio.h>

int main() {
    int x, y;

    // scanf("%d %d", &x, &y) == 2
    // scanf("%d %d", &x, &y) != -1 (reached EOF(End of file))
    while (scanf("%d %d", &x, &y) == 2) {
        printf("%d\n", x + y);
    }
}