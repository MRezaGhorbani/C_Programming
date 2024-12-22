//
//  main.c
//  Project18
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-14.
//

#include <stdio.h>

void Func1(int a);
int Func2(int a);
void Func3(int *a);

int main(void)
{
    int a;
    printf("Please enter an integer: ");
    scanf("%d",&a);
    printf("\n");

    printf("You have entered %d.\n\n",a);

    Func1(a); // Call by Value
    printf("After calling Func1, the value of a is: %d\n\n",a);

    a=Func2(a); // Call by Value + Assignment
    printf("After calling Func2, the value of a is: %d\n\n",a);

    Func3(&a); // Call by Reference
    printf("After calling Func3, the value of a is: %d\n",a);
    printf("a = %d is stored at %p\n\n", a, &a);

    return 0;
}

void Func1(int a)
{
    a*=2;
    printf("Inside function Func1, a is %d.\n",a);
}

int Func2(int a)
{
    a*=2;
    printf("Inside function Func2, a is %d.\n",a);
    return a;
}

void Func3(int *aPtr)
{
    *aPtr *= 2;
    printf("Inside function Func3, a is %d.\n",*aPtr);
    printf("a = %d is stored at %p\n", *aPtr, aPtr);
}
