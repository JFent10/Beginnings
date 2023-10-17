#include<stdio.h>

void main()
{
    for (int i = 0; i < 100; i++)
    {
        if (!(i % 5))
        {
            printf("Fizz");
        }
        if (!(i % 7))
        {
            printf("Buzz");
        }
        else if (i % 5)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}