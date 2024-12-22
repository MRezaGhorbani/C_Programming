//
//  main.c
//  Project9
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-09.
//

#include <stdio.h>
#include <math.h>

#define TRUE -1
#define FALSE 0

int isPrime(int a);

int main(void) {
    
    int a;
    
    do{
        scanf("%d", &a);
        
        if (a <= 0)
            break;
        
        if (isPrime(a))
            printf("%d is a prime number.\n", a);
        else
            printf("%d is NOT a prime number.\n", a);
    } while(a > 0);
}


int isPrime(int a){
        
    int prime = TRUE;
    
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0){
            prime = FALSE;
            break;
        } //end of if
    } //end of for
    
    return prime;
}
