#include <stdio.h>

void print_fibonacci() {
    int num1 = 1;
    int num2 = 2;
    int temp;

    printf("%d, %d", num1, num2);

    for (int i = 3; i <= 50; ++i) {
        temp = num1 + num2;
        printf(", %d", temp);
        num1 = num2;
        num2 = temp;
    }

    printf("\n");
}
