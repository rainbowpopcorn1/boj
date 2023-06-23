#include <stdio.h>
int main() {
    int a, b, c, x, y;
    scanf("%d %d\n%d", &a, &b, &c);
    x = (a + (b + c) / 60) % 24;
    y = (b + c) % 60;
    printf("%d %d", x, y);
}
