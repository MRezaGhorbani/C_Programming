//
//  main.c
//  Project14
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-11.
//

#include <stdio.h>
#include <string.h> // For strlen()


int main(void)
{
    char name[10];

    printf("Please enter your name: ");
    scanf("%9s", name); //here, 9 means that characters of a string after character 9 will not be saved.

    printf("\nYour name is: %s\n\n", name);

    int N = sizeof(name) / sizeof(name[0]);
    // Use strlen to get the length of the string instead of manually iterating
    int nameLength = (int) strlen(name);
    
    printf("The length of array is: %d\n", N);
    printf("The length of array is: %d\n", nameLength);

    int M = 0;
    for(int i = 0; i < N; i++)
    {
        if(name[i] == '\0') break;
        M++;
    }
    printf("The length of your name is: %d\n\n", M);

    return 0;
}

