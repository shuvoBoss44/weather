// write a c program to calculate distance between two points;
#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    float distance;
    printf("input x1: ");
    scanf("%d", &x1);
    printf("input y1: ");
    scanf("%d", &y1);
    printf("input x2: ");
    scanf("%d", &x2);
    printf("input y2: ");
    scanf("%d", &y2);

    distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    printf("%.4f", distance);

    return 0;
}