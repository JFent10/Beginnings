#include<iostream>
#include<malloc.h>
#include<string>
using namespace std;


int prompt(int*, int*, string*, string*);
void fizzBuzz(int, int, string, string, int);


int main()
{

    int op1;
    int op2;
    int reps;

    string str1;
    string str2;

    reps = prompt(&op1, &op2, &str1, &str2);
    fizzBuzz(op1, op2, str1, str2, reps);

    return(0);
}

int prompt(int* op1, int* op2, string* str1, string* str2)
{
    int reps = 0;
    cout << "Please input the first multiple you'd like to replace -> ";
    cin  >> *op1;

    cout << "Please input the second multiple you'd like to replace -> ";
    cin >> *op2;

    cout << "Please input the name for multiples of " << *op1 << " -> ";
    cin >> *str1;

    cout << "Please input the name for multiples of " << *op2 << " -> ";
    cin >> *str2;

    reps = 100;

    return(reps);
}

void fizzBuzz(int op1, int op2, string str1, string str2, int repetitions)
{
    int i;
    for (i = 0; i <= repetitions && repetitions != 0; i++)
    {
        if (!(i % op1))
        {
            cout << str1;
        }
        if (!(i % op2))
        {
            cout << str2;
        }
        else if (i % op1)
        {
            cout << i;
        }
        cout << "\n";
    }
    cout << "Tast Complete";
    return;
}