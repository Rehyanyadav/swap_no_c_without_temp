//wap to swap to variable without using thrid variable 
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Swap the integers without a third variable using XOR
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    printf("After swapping: \n");
    printf("First integer: %d\n", num1);
    printf("Second integer: %d\n", num2);

    return 0;
}
