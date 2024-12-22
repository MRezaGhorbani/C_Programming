//
//  main.c
//  Project16
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-13.
//

#include <stdio.h>

void bubbleSort(int a[], int N);
void printArray(int a[], int N);
void Swap(int a[], int j1, int j2);

int main(void){
    
    int a[] = {23,43,65,34,22,78,11,62,78,91,46,13,65,56,23,45,78,72,41,30};
    int N = sizeof(a)/sizeof(a[0]);
    
    printf("Array before sorting:\n");
    printArray(a,N);
    printf("Array before sorting:\n\n");
    
    bubbleSort(a,N);
    
    printf("Array after sorting:\n");
    printArray(a,N);
    
    return 0;
}


void bubbleSort(int a[], int N){

    int swapFlag;
    
    for (int i = 0; i < N; i++){
        swapFlag = 0;
        for (int j = 0; j<N-1; j++){
            if(a[j] > a[j+1]){
                Swap(a, j, j+1);
                swapFlag = 1;
            }
        }
        if (!swapFlag) break;
    }
}

void Swap(int a[], int j1, int j2)
{
    int temp = a[j1];
    a[j1] = a[j2];
    a[j2] = temp;
}


void printArray(int a[], int N){
    
    for(int i = 0; i < N; i++){
        printf("%d%s", a[i], (i < N-1) ? ", ": "\n");
    }
}
