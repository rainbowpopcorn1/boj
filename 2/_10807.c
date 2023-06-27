#include <stdio.h>

int A[100];

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) { 
        scanf("%d", &A[i]);
    }
    int v;
    scanf("%d", &v);
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == v) {
            cnt++;
        }
    }
    printf("%d", cnt);
}