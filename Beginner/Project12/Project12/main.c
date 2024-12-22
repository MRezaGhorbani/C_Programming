//
//  main.c
//  Project12
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-09.
//

#include <stdio.h>
#define N 20

int main(void)
{
    int F[N];

    // Initial Conditions
    F[0] = 0;
    F[1] = 1;

    for(int i = 2; i<N ; i++) {
        F[i] = F[i-1] + F[i-2];
    }

    for(int i = 0; i < N ; i++) {
        printf("F[%d] = %d\n", i, F[i]);
    }
    printf("\n");

    return 0;
}

