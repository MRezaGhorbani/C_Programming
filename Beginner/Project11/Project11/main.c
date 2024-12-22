//
//  main.c
//  Project11
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-09.
//

#include <stdio.h>
#include <math.h>

void SolveQuadEq(void);

int main(void)
{
    SolveQuadEq();
    return 0;
}

void SolveQuadEq(void)
{
    printf("In this routine, quadratic algebraic equation is solved.\n");
    printf("ax2 + bx + c = 0\n");
    printf("Please enter quadratic equation coefficients.\n");

    float a, b, c;

    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);
    printf("\n");

    float x1, x2;

    if(a == 0)
    {
        if(b==0)
        {
            printf("Error: Equation has no solution.\n");
        }
        else{
            x1 = -c/b;
            printf("The equation is of the first-order and has only one root.\n");
            printf("x1 = %f", x1);
        }
        printf("\n");
    }
    else{
        float delta = b*b - 4*a*c;
        if(delta==0){
            x1 = -b/(2*a);
            printf("The equation has a double root.\n");
            printf("x1 = x2 = %0.2f", x1);
        }
        else if (delta > 0){
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("The equation has two distinct roots.\n");
            printf("x1 = %.3f, x2 = %.3f", x1, x2);
        }
        else{
            printf("The equation has two complex roots.\n");
            printf("x1 = %.2f + %.2fi\t", -b/(2*a), sqrt(-delta)/(2*a));
            printf("x2 = %.2f - %.2fi", -b/(2*a), sqrt(-delta)/(2*a));
        }
    }
    printf("\n----------------------------------\n");
}

