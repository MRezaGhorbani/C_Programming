//
//  main.c
//  Project7
//
//  Created by MOHAMMADREZA GHORBANI on 2024-12-06.
//

#include <stdio.h>
#define TRUE -1

int main(void)
{
    char grade;
    int nA = 0, nB = 0, nC = 0, nD = 0, nF = 0;     // Grades' counter initialization

    /*
    while(TRUE){
        grade = getchar();
        if(grade==EOF) break;
    }
    */

    while((grade = getchar()) != EOF) {

        switch(grade){
            case 'A':
            case 'a':
                printf("You entered A.\n");
                nA++;
                break;

            case 'B':
            case 'b':
                nB++;
                break;

            case 'C':
            case 'c':
                nC++;
                break;

            case 'D':
            case 'd':
                nD++;
                break;

            case 'F':
            case 'f':
                nF++;
                break;

            case ' ':
            case '\n':
            case '\t':
                break;

            default:
                printf("Incorrect input. Please enter from grade set {A, B, C, D, F}.\n");

        } // end of switch(grade)
    } // end of while

    int n = nA + nB + nC + nD + nF;

    int cA = nA;
    int cB = cA + nB;
    int cC = cB + nC;
    int cD = cC + nD;
    int cF = cD + nF;

    printf("Grade\tCount\tPercent\tCum.Percent\n");
    printf("A\t\t%d/%d\t%.2f\t%.2f\n", nA, n, (float)nA*100/n, (float)cA*100/n);
    printf("B\t\t%d/%d\t%.2f\t%.2f\n", nB, n, (float)nB*100/n, (float)cB*100/n);
    printf("C\t\t%d/%d\t%.2f\t%.2f\n", nC, n, (float)nC*100/n, (float)cC*100/n);
    printf("D\t\t%d/%d\t%.2f\t%.2f\n", nD, n, (float)nD*100/n, (float)cD*100/n);
    printf("F\t\t%d/%d\t%.2f\t%.2f\n", nF, n, (float)nF*100/n, (float)cF*100/n);

    if((float)cC/n >= 0.6) {
        printf("\nCongratulation to teacher!\n\n");
    }

    return 0;

}
