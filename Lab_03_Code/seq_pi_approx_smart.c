/*  seq_pi_approx.c
    calculates a sequence that sums up to Pi=3.14..
    using the structure do .. while
*/

#include <stdio.h>
#include <math.h>

float pi_approx(int times) {
int i=0;
float temp=0;

do {
 i++;
 temp+=1.0/(i*i);
 printf("temp: %f, i: %d\n", temp, i);
} while (i<times);  //end do .. while i

return sqrt(6*temp);
} //end of function pi_approx

int main()
{
printf("The sum is: %f \n", pi_approx(200));
return 0;
}
