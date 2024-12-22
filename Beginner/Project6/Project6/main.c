//
//  main.c
//  Project6
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-06.
//

#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, d, p;
    int n;

    // Get a
    printf("Please enter the first element of series (a): ");
    scanf("%f", &a);

    // Get d
    printf("Please enter the step size of series (d): ");
    scanf("%f", &d);

    // Get n
    printf("Please enter the total number of elements (n): ");
    scanf("%d", &n);

    // Get p
    printf("Please enter the exponent power of elements (p): ");
    scanf("%f", &p);

    float S = 0;
    float ai;
    float T = 0;
    float bi;

    printf("i\ta(i)\t\tS(i)\t\tb(i)\t\tT(i)\n");

    for(int i = 0; i < n; i++){

        ai = a + i*d;   // calculate the i-th element
        S += ai;
        bi = pow(ai, p);
        T += bi;
        printf("%d\t%f\t%f\t%f\t%f\n", i, ai, S, bi, T);
    }

    printf("\n\nFinal sum of series is: %f\n", S);
    printf("\n\nFinal sum of series' exponent is: %f\n\n", T);

    return 0;
}
