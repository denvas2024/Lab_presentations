/*

Program: array24.c
Reads/Scans from file input.txt and prints the avarage of the numbers

*/
#include <stdio.h>
#include <stdlib.h>

void print_array(int arraysize, int printarray[arraysize]) {

printf("\nThe contents of the array is: \n");

for (int i=0;i<arraysize;i++) 
    printf("%d\t",printarray[i]);

printf("\n");

}

float average_array(int n, int *array) {

int sum_of_elements=0;

for (int i=0;i<n;i++) 
    sum_of_elements+=array[i];

return (float)sum_of_elements/n;

}

int main() {

int *array;
int arraysize;
int i;

scanf("%d", &arraysize);
array=malloc(arraysize*sizeof(int));

i=0;

while (i<arraysize) {
//    printf("Enter an integer value for cell array[%d] :",i);
    scanf("%d", &array[i]);
    i++;
}

printf("The size of the array is: %d\n", arraysize);

print_array(arraysize, array);

printf("The average of the numbers in file is: %.2f\n", average_array(arraysize, array));


free(array);

return 0;

}