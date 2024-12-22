//
//  main.c
//  Project4
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-06.
//

#include <stdio.h>


#define TRUE -1  // Any non-zero velue in C is considered "true".
#define FALSE 0

// You can you the library <stdbool.h> to use 'true'and 'false' instead of defining them as macro here.


int main(void)
{
    int a, S, i;
    
    S = 0;
    i = 0;

    while(TRUE){  // Use i<n condition for limited number of entries
        printf("Enter a number: ");
        scanf("%d", &a);
        if(a==-1) break;
        S+=a;
        i++;
    }

    printf("\nSum of numbers is: %d\n", S);

    float m = (float)S/i;
    printf("Mean of numbers is: %.2f\n", m);

    return 0;
}
