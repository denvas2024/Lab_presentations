/*  seq_basel.c
    calculates a sequence that sums up to 1.644..
    using the structure for
*/

#include <stdio.h>

float sum() {

//int i=0;
float temp=0;

for (int i=1;i<=100;i++) {

    //temp+=(float)1/(i*i);
    temp+=1.0/(i*i);
    printf("temp: %f, i: %d\n", temp, i);

}

return temp;

}

int main()
{

printf("The sum is: %f \n", sum());

return 0;

}
