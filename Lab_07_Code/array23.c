/*
Program: array22.c
Reads/Scans from file input.txt

*/
#include <stdio.h>
#include <stdlib.h>

void print_array(int arraysize, int printarray[arraysize]) {

printf("\nThe contents of the array is: \n");
for (int i=0;i<arraysize;i++) 
    printf("%d\t",printarray[i]);
printf("\n");

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

free(array);

return 0;

}