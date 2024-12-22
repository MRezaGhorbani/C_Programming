//
//  main.c
//  Project10
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-09.
//

#include <stdio.h>

int Fibo_1(int n);
int Fibo(int n);

int main(void) {
    
    int n = 20;
    
    for(int i = 0; i<=n; i++)
        printf("F(%d) = %d.\n", i, Fibo(i));
    
    printf("\nEstimating Golden Ratio:\n");
    for(int i = 1; i<=n; i++)
    {
        float r = (float) Fibo(i+1)/Fibo(i);
        printf("R(%d) = F(%d)/F(%d) = %.5f\n", i, i+1, i, r);
    }
    return 0;
}


int Fibo_1(int n) {
    
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    int num1 = 0;
    int num2 = 1;
    int num = 0;
    
    int i = 0;

    while( i <= n-2 ) {
            num  = num1 + num2;
            num1 = num2;
            num2 = num;
            i++;
        }
    return num;
}

int Fibo(int n) {
    
    if (n == 0) return 0;
    if (n == 1) return 1;
    return Fibo(n-1) + Fibo(n-2);
}


