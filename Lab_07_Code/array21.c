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

printf("Enter the size of the array :");
scanf("%d", &arraysize);
array=malloc(arraysize*sizeof(int));

i=0;

while (i<arraysize) {
    printf("Enter an integer value for cell array[%d] :",i);
    scanf("%d", &array[i]);
    i++;
}

print_array(arraysize, array);

free(array);

return 0;

}