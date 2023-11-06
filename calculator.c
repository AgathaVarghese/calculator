#include <stdio.h>

int main(void)

{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%i  %i", &a, &b);

    printf("%i + %i = %i\n", a, b, a+b);

    return 0;
}
