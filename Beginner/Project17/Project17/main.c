//
//  main.c
//  Project17
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-13.
//

#include <stdio.h>

int GetDevisors(int x, int a[]);
void printArray(const int a[], int N);

int main(void)
{
    int n;
    printf("Please enter an integer: ");
    scanf("%d", &n);
    printf("\n");

    // We call GetDevisors two times: 1) once for identifying the length of divisoes, and 2) for finding the value of devisors and writing them in that array.
    int N = GetDevisors(n, NULL);

    int a[N];
    //Initialization
    for(int i=0; i<N; i++){
        a[i] = 0;
    }

    GetDevisors(n, a);

    printArray(a, N);

    return 0;
}


int GetDevisors(int x, int a[])
{
    int j = 0;

    if(x==0) return 0;
    if(x<0) x = -x;

    for (int i = 1; i<=x; i++)
    {
        if(x%i == 0)
        {
            if(a!=NULL) a[j] = i;
            j++;
        }
    }
    return j;
}

void printArray(const int a[], int N)
{
    for (int i=0; i<N; i++){
        printf("%d%s", a[i], (i<N-1) ? ", ": "\n");
    }
}

