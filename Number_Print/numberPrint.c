#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    if (start <= end) {
        for (int i = start; i <= end; i++) {
            printf("%d", i);
            printf("\n");
        }
    } 

    return 0;
}

