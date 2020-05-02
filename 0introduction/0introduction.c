#include <stdio.h>

int main() {
    int a = 2147483648;
    int b = a / -1;
    printf("%d, %d\n", a, b);
    return 0;
}