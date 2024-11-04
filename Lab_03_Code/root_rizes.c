#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {

double a,b,c;
double diakrinousa;

// A Different implementation
/* 
time_t seconds;
seconds=time(NULL);
srand(seconds);
*/

srand(time(NULL));

a=(double)rand()/RAND_MAX;
b=(double)rand()/RAND_MAX;
c=(double)rand()/RAND_MAX;

printf("%f %f %f\n", a, b, c);
//a=4.0;b=4.0;c=2.0;

diakrinousa=b*b-4*a*c;

printf("Diakrinousa %f \n", diakrinousa);
if (diakrinousa>0) 
    printf("The trinomial equation has two solutions, x1= %.3f, x2= %.3f\n",(-b+sqrt(diakrinousa))/(a*2), (-b-sqrt(diakrinousa))/(a*2));
else 
    if (diakrinousa==0) 
        printf("The trinomial equation has one solution, x1= %.3f\n",-b/(a*2));
    else 
        printf("The trinomial equation has two complex solutions, x1= (%.3f) + (%.3fi), x2= (%.3f) + (%3fi) \n",(-b/a*2),(sqrt(-diakrinousa))/(a*2), 
                                                                                                    (-b/a*2),(-sqrt(-diakrinousa))/(a*2));

return 0;

}
