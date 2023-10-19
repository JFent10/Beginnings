#include<stdio.h>
#include<malloc.h>

int prompt(int*, int*, char*, char*);
void fizzBuzz(int, int, char*, char*, int);

void main()
{
    int op1;
    int op2;
    int repetitions;

    char* str1 = malloc(80);
    char* str2 = malloc(80);

    repetitions = prompt(&op1, &op2, str1, str2);
    printf("Repetitions is %d", repetitions);
    fizzBuzz(op1, op2, str1, str2, repetitions);

    free(str1);
    free(str2);
}

int prompt(int* op1, int* op2, char* str1, char* str2)
{
    int repetitions;
    printf("Please input the first multiple you'd like to replace -> ");
    scanf("%d", op1);

    printf("Please input the second multiple you'd like to replace -> ");
    scanf("%d", op2);

    printf("Please input the name for multiples of %d -> ", *op1);
    scanf("%79s", str1);

    printf("Please input the name for multiples of %d -> ", *op2);
    scanf("%79s", str2);

    /*printf("Please input the number of numbers you'd like to display -> ");
    scanf("%d", repetitions);
    */
    repetitions = op1;

    printf("check");    
    return(repetitions);
}

void fizzBuzz(int op1, int op2, char* str1, char* str2, int repetitions)
{
    int i;
    for (i = 0; i <= repetitions; i++)
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