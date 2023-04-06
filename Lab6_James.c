/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int Average(int array[], int n);
int Max(int array[], int n);
int Min(int array[], int n);
int Index(int array[], int n);
int main()
{
    int n, Max1, Min1, Average1, Index1;
    int array[n];
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n",n);
    for(int i=0;i<n;i++){
        printf("element - %d : ",i);
        scanf("%d",&array[i]);
	    }
    
    
    Max1 = Max(array, n);
    Min1 = Min(array, n);
    Average1 = Average(array, n);
    Index1 = Index(array, n);
    
    printf("Max: %d", Max1);
    printf("Min: %d", Min1);
    printf("Average of elements: %d", Average1);
    printf("Even  index of elements: %d", Index1);

    return 0;
}

int Average(int array[], int n){
    int count = 0;
    int value = 0;
    for(int i = 0; i<n; i++){
        int value += array[i];
        count++;
    }
    return value/=count;
}

int Max(int array[], int n){
    int value = 0;
    for (int i = 0; i<n; i++){
        if(array[i]>value){
            value = array[i];
        }
    }
    return value;
}

int Min(int array[], int n){
    int value = 100;
    for (int i = 0; i<n; i++){
        if(array[i]<value){
            value = array[i];
        }
    }
    return value;
}

int Index(int array[], int n){
        int value = 100;
    for (int i = 0; i<n; i++){
        if(array[i]<value){
            value = array[i];
        }
    }
    return value;
}
