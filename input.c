#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    int sum = 0;
    sum = a + b;
    printf("\033[0;32m");
    printf("Sum of %d and %d is %d\n", a, b, sum);
}