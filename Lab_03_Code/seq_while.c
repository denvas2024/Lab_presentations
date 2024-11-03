/*  seq_while.c
    calculates the sum of the first 100 integer numbers
    using the structure while
*/

#include <stdio.h>

int sum() {

int i=0;
int temp=0;

while (i<100) {

    temp+=++i;
    printf("temp=%d and i=%d\n", temp, i);

}

return temp;

}

int main()
{

printf("The sum is: %d \n", sum());

return 0;

}
