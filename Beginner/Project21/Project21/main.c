//
//  main.c
//  Project21
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-15.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 5;

    // Using malloc
    int *arr1 = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("arr1[%d] = %d\n", i, arr1[i]); // Garbage values
    }

    // Using calloc
    int *arr2 = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]); // All 0s
    }

    // Free the memory
    free(arr1);
    free(arr2);

    return 0;
}
