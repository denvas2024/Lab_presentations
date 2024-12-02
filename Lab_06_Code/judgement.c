/*
judgement.c

Simple example for array usage and function calls

*** THERE HAS TO BE A MIN AND MAX SCORE, IF NOT O and INT_MAX are used.

*/

#include <stdio.h>
#include <limits.h>
#define arraysize 10

/*
Prototypes of functions calls
*/

int max_array(int *, int );  
int min_array(int *, int );  
int sum_array(int *, int );  

int main() {

int a[arraysize];
float score=0;

for (int i=0;i<arraysize; i++)
    scanf("%d",&a[i]);

score=(float)(sum_array(a, arraysize)-max_array(a, arraysize)-min_array(a, arraysize))/8;

printf("Sum is: %d\n", sum_array(a, arraysize) );
printf("Min is: %d\n", min_array(a, arraysize) );
printf("Max is: %d\n", max_array(a, arraysize) );
printf("Average is: %0.2f\n", score);
return 0;    

}

int min_array(int *array, int n) {

int min_element=INT_MAX;

for (int i=0;i<n;i++)
    if (array[i]<min_element)
        min_element=array[i];

return min_element;

}

int max_array(int *array, int n) {

int max_element=0;

for (int i=0;i<n;i++)
    if (array[i]>max_element)
        max_element=array[i];

return max_element;

}

int sum_array(int *array, int n) {

int sum_of_elements=0;

for (int i=0;i<n;i++) 
    sum_of_elements+=array[i];

return sum_of_elements;

}