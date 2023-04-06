/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

double compute_inner_sq_diff(double *a, double *b, int n);

int main(void)
{
    int i, n;
    double A[n], B[n];
    printf("Enter n: ");
    scanf(" %d", &n);
    
    printf("Enter the values of a: \n");
    for (i = 0; i < n; i++){
        scanf(" %lf", &A[i]);
    }
        
    printf("Enter the values of b: \n");
    for (i = 0; i < n; i++){
        scanf(" %lf", &B[i]);
    }

    printf("Inner Product: %f", compute_inner_sq_diff(A, B, n));

    return 0;
}

double compute_inner_sq_diff(double *a, double *b, int n) {
    int i;
    double inner_Product = 0.0;
    for (i = 0; i < n; i++){
        double *p = &a[i];
        double *q = &b[i];
        inner_Product += (*p - *q) * (*p - *q);
    }
    return inner_Product;
}