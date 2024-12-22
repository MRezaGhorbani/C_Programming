//
//  main.c
//  Project5
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-06.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a, d;
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

    float ai;
    float S = 0;

    printf("i\ta(i)\t\tS(i)\n");

    /* Using While Loop
    int i = 0;
    while(i < n){
        ai = a + i*d;   // calculate the i-th element
        S += ai;
        printf("%d\t%f\t%f\n", i, ai, S);

        i++;
    }
    */

    for(int i = 0; i < n; i++){

        /* use for iteration control
        if(i == 3) continue;
        if(i == 7) break;
        */

        ai = a + i*d;   // calculate the i-th element
        S += ai;
        printf("%d\t%f\t%f\n", i, ai, S);
    }

    printf("\n\nFinal sum of series is: %f\n\n", S);
    return 0;
}
