//
//  main.c
//  Project2
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-06.
//

#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    printf("Please enter an integer:\n");   // Prints prompt
    scanf("%d", &a);    // Gets a number
    printf("Please enter another integer:\n");   // Prints prompt
    scanf("%d", &b);    // Gets a number

    c = a + b;
    printf("%d + %d = %d\n", a, b, c);

    d = a * b;
    printf("%d * %d = %d\n", a, b, d);
    printf("%d mod %d = %d\n", a, b, a % b);

    return 0;
}
