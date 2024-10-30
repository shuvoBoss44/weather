// write a c program that accpts two integers from the user and calculates the sum of two integers

#include <stdio.h>

int main()
{
    int a, b, sum;
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("%d", sum);
    return 0;
}