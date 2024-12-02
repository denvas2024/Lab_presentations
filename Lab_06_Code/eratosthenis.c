/*
eratosthenis.c
Find all prime number (i) from 0 to N.
When printing the result 0 and 1 are ommitted
*/

#include <stdio.h>

#define N 50

int main() {

int A[N];

for (int i=0;i<N; i++) //Initialize array A. All array cells are set to 1
    A[i]=1;

for (int i=2;i<N; i++)  //For each i<N, find its multiplies and set the coresponding array cell to 0
    if (A[i]!=0) 
        for (int j=2*i;j<N;j=j+i)
            A[j]=0;


for (int i=2;i<N; i++)  //For each i<N, find its multiplies and set the coresponding array cell to 0
    if (A[i]==1) 
        printf ("Number %d is a prime number\n", i);
}