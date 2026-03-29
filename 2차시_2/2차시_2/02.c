#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hanoi(int n, int a, int b, int c) {
    if (n == 1) {
        printf("%d %d\n", a, c);
        return;
    }

    hanoi(n - 1, a, c, b);   
    printf("%d %d\n", a, c);   
    hanoi(n - 1, b, a, c);  
}

int main() {
    int n;
    scanf("%d", &n);

    int m = (1 << n) - 1;
    printf("%d\n", m);

    hanoi(n, 1, 2, 3);

    return 0;
}