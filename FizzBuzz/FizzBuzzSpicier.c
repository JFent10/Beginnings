#include<stdio.h>
#include<malloc.h>

int prompt(int*, int*, char*, char*);
void fizzBuzz(int, int, char*, char*, int);

int main()
{
    int op1;
    int op2;
    int reps;

    char* str1 = malloc(80);
    char* str2 = malloc(80);

    reps = prompt(&op1, &op2, str1, str2);
    fizzBuzz(op1, op2, str1, str2, reps);

    free(str1);
    free(str2);
    return(0);
}

int prompt(int* op1, int* op2, char* str1, char* str2)
{
    int reps = 0;
    printf("Please input the first multiple you'd like to replace -> ");
    scanf("%d", op1);

    printf("Please input the second multiple you'd like to replace -> ");
    scanf("%d", op2);

    printf("Please input the name for multiples of %d -> ", *op1);
    scanf("%79s", str1);

    printf("Please input the name for multiples of %d -> ", *op2);
    scanf("%79s", str2);

    printf("Please input how many numbers should be displayed -> ");
    scanf("%d", &reps);

    return(reps);
}

void fizzBuzz(int op1, int op2, char* str1, char* str2, int repetitions)
{
    int i;
    for (i = 0; i <= repetitions && repetitions != 0; i++)
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
    printf("Tast Complete");
    return;
}