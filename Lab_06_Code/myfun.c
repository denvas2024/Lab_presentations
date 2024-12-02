//#include <stdio.h>

void badf(int x, int y, int sum, int diff) {

sum = x + y;
diff = x - y;
//printf("The sum a+b is: %d, the difference a-b is: %d\n", sum, diff);

}

void goodf(int x, int y, int *sum, int *diff) {

*sum = x + y;
*diff = x - y;
//printf("The sum a+b is: %d, the difference a-b is: %d\n", sum, diff);

}

