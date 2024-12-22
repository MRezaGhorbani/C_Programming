//
//  main.c
//  Project20
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-15.
//

#include <stdio.h>

void PrintArray(const int *const a, int N);
void BubbleSort(int *const a, int N, int (*compare)(int a, int b));
void Swap(int *p1, int *p2);
int Ascending(int a, int b);
int Descending(int a, int b);
int AscendingRem3(int a, int b);

int main(void)
{
    int a[]={23,53,12,10,17,56,78,34,29,37,45,12,19,20,40,90,43,48,62};

    int N=sizeof(a)/sizeof(a[0]);

    printf("Array before sorting:\n");
    PrintArray(a,N);
    printf("\n\n");

    int (*f[3])(int,int) = {Ascending, Descending, AscendingRem3};

    int i;
    for(i=0; i<3; i++)
    {
        BubbleSort(a,N,f[i]);
        printf("Array after sorting with f[%d]:\n",i);
        PrintArray(a,N);
        printf("\n\n");
    }
    printf("\n");

    return 0;
}

void BubbleSort(int *const a, int N, int (*compare)(int a, int b))
{
    int i, j;
    int swapped;

    for(i=0; i<N; i++)
    {
        swapped = 0;
        for(j=0; j<N-1; j++)
        {
            if(!(*compare)(a[j],a[j+1]))
            {
                Swap(&a[j], &a[j+1]);
                swapped = 1;
            }
        }
        if(!swapped) break;
    }
}

void Swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int Ascending(int a, int b)
{
    return (a<=b);
}

int Descending(int a, int b)
{
    return (a>=b);
}

int AscendingRem3(int a, int b)
{
    return ((a%3)<=(b%3));
}

void PrintArray(const int *const a, int N)
{
    int i;
    for(i=0; i<N; i++)
    {
        printf("%d",a[i]);
        if(i<N-1)
        {
            printf(", ");
        }
    }
}
