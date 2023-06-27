#include <stdio.h>
int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    
    if (x == y && y == z && z == x) {
        printf("%d", 10000 + 1000 * x);
    }
    else if (x == y) {
        printf("%d", 1000 + 100 * x);
    }
    else if (y == z) {
        printf("%d", 1000 + 100 * y);
    }
    else if (z == x) {
        printf("%d", 1000 + 100 * x);
    }
    else {
        if (x > y && x > z) {
            printf("%d", 100 * x);
        }
        else if (y > x && y > z) {
            printf("%d", 100 * y);
        }
        else {
            printf("%d", 100 * z);
        }
    }
}