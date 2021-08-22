#include <stdio.h> 

void pyramid(int n, int x) {
    if (n != -1) {
        pyramid(n - 2, x + 1);
        for (int i = 0; i < x; ++i)
            printf(" ");
        for (int i = 0; i < n; ++i)
            printf("*");
        printf("\n");
    }
}
int main() {
    int n;
    scanf_s("%d", &n);
    pyramid(n * 2 - 1, 0);
    return 0;
}