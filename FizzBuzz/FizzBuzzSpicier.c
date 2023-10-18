#include<stdio.h>
#include<malloc.h>

void prompt(int*, int*, char*, char*);
void fizzBuzz(int, int, char*, char*);

void main()
{
    int op1;
    int op2;

    char* str1 = malloc(80);
    char* str2 = malloc(80);

    prompt(&op1, &op2, str1, str2);
    fizzBuzz(op1, op2, str1, str2);
    free(str1);
    free(str2);
}

void prompt(int* op1, int* op2, char* str1, char* str2)
{
    printf("Please input the first multiple you'd like to replace -> ");
    scanf("%d", op1);

    printf("Please input the second multiple you'd like to replace -> ");
    scanf("%d", op2);

    printf("Please input the name for multiples of %d -> ", *op1);
    scanf("%79s", str1);

    printf("Please input the name for multiples of %d -> ", *op2);
    scanf("%79s", str2);
    return;
}

void fizzBuzz(int op1, int op2, char* str1, char* str2)
{
    for (int i = 0; i < 100; i++)
    {
        if (!(i % op1))
        {
            printf("%s", str1);
        }
        if (!(i % op2))
        {
            printf("%s", str2);
        }
        else if (i % op1)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return;
}