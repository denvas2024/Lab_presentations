/*  seq_basel_extra_variable.c
    calculates a sequence that sums up to 1.644..
    using the structure for and an extra variable to
    store the value of the current term
*/

#include <stdio.h>

float sum() {

float interim=0.0;
float temp=0.0;

for (int i=1;i<=100;i++) {

    interim=(float)1/(i*i);
    temp+=interim;
    printf("temp: %f, interim: %f i: %d\n", temp, interim, i);

}

return temp;

}

int main()
{

printf("The sum is: %f \n", sum());

return 0;

}
