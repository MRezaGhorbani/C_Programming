//
//  main.c
//  Project3
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-06.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c;

    printf("Please enter an integer:\n");
    scanf("%d", &a);

    b = ++a;
    printf("b is %d, and a is %d \n", b, a);
    a--;
    c = a++;
    printf("c is %d, and a is %d \n", c, a);
    a--;

    if(0==a>0) // to evaluate operators' priorities
    {
        printf("Number is non-positive.\n\n");
    }

    if(a % 2 == 0){
        printf("%d is Even.\n", a);
    }
    else{
        printf("%d is Odd.\n", a);
    }

    if(a > 0){
        printf("%d is Positive.\n", a);
    }
    else if(a < 0){
        printf("%d is Negative.\n", a);
    }
    else{
        printf("%d is Zero.\n", a);
    }

    return 0;
}
