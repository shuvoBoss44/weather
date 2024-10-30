// write a c program to convert specified days into years and weeks and days[note: ignore leap year]

#include <stdio.h>

int main()
{
    long specifiedDays;
    int years, weeks, days;
    scanf("%ld", &specifiedDays);
    years = specifiedDays / 365;
    weeks = (specifiedDays % 365) / 7;
    days = specifiedDays - ((years * 365) + (weeks * 7));
    printf("%d years\n", years);
    printf("%d weeks\n", weeks);
    printf("%d days\n", days);

    return 0;
}