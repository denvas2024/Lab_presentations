#include <stdio.h>

void goodf(int x, int y, int *sum, int *diff) {

*sum = x + y;
*diff = x - y;
//printf("The sum a+b is: %d, the difference a-b is: %d\n", sum, diff);

}


int main() {
int sum=0, diff=0;    

goodf(2, 3, &sum, &diff); //Call by pointer
printf("The sum a+b is: %d, the difference a-b is: %d\n", sum, diff);
return 0;

}