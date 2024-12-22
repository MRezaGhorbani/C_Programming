//
//  main.c
//  Project13
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-10.
//

#include <stdio.h>
#include <math.h>

int main(void)
{
    int p[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
               5, 3, 3, 2, 9, 7, 7, 1, 3, 5,
               4, 5, 9, 1, 8, 7, 8, 6, 4, 5,
               2, 3, 5, 7, 9, 1, 5, 6, 7, 1,
               5, 1, 1, 2, 2, 2, 7, 1, 5, 6};

    /* Initialization
    int f[10] = {0,0,0,0,0,0,0,0,0,0};
    */

    // Initialization is necessary
    int f[10];
    for(int i = 0; i < 10; i++){
        f[i] = 0;
    }

    int N = sizeof(p) / sizeof(int);

    for(int i = 0; i < N; i++)
    {
        f[p[i]]++;
    }

    printf("Poll\tCount\tHistogram\n");
    for(int j = 0; j < 10; j++)
    {
        printf("%d\t\t%d\t\t", j, f[j]);
        for(int k = 0; k <=f[j]; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        sum += p[i];
    }
    float mean = (float)sum/N;

    float stdev = 0; // Standard deviation
    for(int i = 0; i < N; i++)
    {
        stdev += (p[i]-mean)*(p[i]-mean);
    }
    stdev = sqrt(stdev/(N-1));

    printf("Sum is %d\n", sum);
    printf("Mean is %f\n", mean);
    printf("StDev is %f\n", stdev);

    return 0;
}

