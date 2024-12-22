//
//  main.c
//  Project15
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-11.
//

#include <stdio.h>


// We should define the prototype of all functions in the begining before main() function
void PrintArray(const int a[], int N);
float Mean(const int a[], int N);
void MakeDouble(int a[], int N);
void MakeDouble2(int s);

int main(void)
{
    int p[]={1,2,3,4,5,6,7,8,9,0};

    int N=sizeof(p)/sizeof(p[0]);

    PrintArray(p,N);

    float m = Mean(p,N);
    printf("Mean of Array Elements = %f\n\n", m);

    printf("Calling MakeDouble function ...\n\n");
    //Call by reference: here, the array (sent as function argument) can change in the main() function
    MakeDouble(p,N);
    PrintArray(p,N);

    int s = 10;
    printf("Before MakeDouble2: s = %d\n",s);
    //Call by value: here, the variable (sent as function argument) will not change in the main() function
    MakeDouble2(s);
    printf("After MakeDouble2: s = %d\n",s);


    return 0;
}

//void PrintArray(const int a[], int N)
//{
//    printf("List of array members:\n");
//    int i;
//    for(i=0; i<N; i++)
//    {
//        printf("%d",a[i]);
//        if(i<N-1)
//        {
//            printf(", ");
//        }
//    }
//    printf("\n\n");
//}

void PrintArray(const int a[], int N) {
    printf("List of array members:\n");
    for (int i = 0; i < N; i++)
        printf("%d%s", a[i], (i < N - 1) ? ", " : "\n");
}

float Mean(const int a[], int N)
{
    int sum = 0;
    int i;
    for(i=0; i<N; i++)
    {
        sum += a[i];
    }
    return (float)sum/N;
}

void MakeDouble(int a[], int N) // using 'const' before 'int a[]' can prevent array p[] from changing.
{
    int i;
    for(i=0; i<N; i++)
    {
        a[i]*=2;
    }
}

void MakeDouble2(int s)
{
    s*=2;
}
