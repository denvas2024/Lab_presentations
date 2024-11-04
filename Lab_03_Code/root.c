#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {

double a,b,c;


// A Different call for srand() 
/* 
time_t seconds;
seconds=time(NULL);
srand(seconds);
*/

srand(time(NULL));

a=(double)rand()/RAND_MAX;
b=(double)rand()/RAND_MAX;
c=(double)rand()/RAND_MAX;

printf("Random Num 1: %f, Num 2: %f, Num 3: %f \n", a, b, c);

return 0;

}