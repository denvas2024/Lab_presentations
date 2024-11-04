#include <stdio.h>
#include <math.h>

double pi_approx_detail() {

int i=0;
double temp=0.0;
double new_term=0.0;

do {
    i++;
    //new_term=1.0/(i*i);
    new_term=1.0/((double)i*(double)i);
    temp+=new_term;
    //printf("temp: %f, i: %d, term: %.20f \n", temp, i, new_term);

} while (new_term>=1e-15);

printf("temp: %f, i: %d, term: %.20f \n", temp, i, new_term);
return sqrt(6*temp);

} 

int main()
{

printf("The sum is: %f \n", pi_approx_detail());

return 0;

}
