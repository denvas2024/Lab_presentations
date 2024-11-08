#include <stdio.h>
#include <math.h>

double eta_two(int terms) {

int i=0;
double temp=0.0;
double new_value=0.0;

for(i=1;i<=terms;i++){

    new_value=pow(-1, (i-1))/((double)i*(double)i);
    temp+=new_value;
    
    printf("temp: %10.8f, i: %d, new value: %10.8f \n", temp, i, new_value);

}


printf("temp: %10.8f, i: %d, new value: %10.8f \n", temp, i, new_value);
return temp;

} 

int main()
{


int terms;

printf("Please enter the number of terms to use: ");
scanf("%d", &terms);
printf("The sum is: %10.8f \n", eta_two(terms));


return 0;

}
