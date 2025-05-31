#include <stdio.h>

int main() {
    int a, b, temp;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);


    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
