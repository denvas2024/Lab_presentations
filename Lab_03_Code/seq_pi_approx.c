/*  seq_pi_approx.c
    calculates a sequence that sums up to Pi=3.14..
    using the structure do .. while
*/

#include <stdio.h>
#include <math.h>

/*  Function pi_approx
    Calculates an approximation of pi value
*/    
double pi_approx() {
int i=0;
double temp=0;

do {
 i++;
 temp+=1.0/(i*i);
 printf("temp: %f, i: %d\n", temp, i);
} while (i<400);  //end do .. while i

return sqrt(6*temp);
} //end of function pi_approx

int main()
{
printf("The sum is: %f \n", pi_approx());
return 0;
}

