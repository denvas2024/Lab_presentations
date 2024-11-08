#include <stdio.h>
#include <math.h>

double leibniz(int terms) {

int i=0;
double temp=0.0;
double new_value=0.0;

for(i=0;i<terms;i++){

    new_value=pow(-1, i)/(2*i+1);   //pow() returns double
    temp+=new_value;
    
    printf("temp: %10.8f, i: %d, new value: %10.8f \n", temp, i, new_value);

}


printf("temp: %10.8f, i: %d, new value: %10.8f \n", temp, i, new_value);
return temp;

} 

int main()
{


int terms;
double lei_sum=0.0;

printf("Please enter the number of terms to use: ");
scanf("%d", &terms);
lei_sum=leibniz(terms);
printf("The sum is: %10.8f \n", lei_sum);
//printf("The sum is: %10.8f \n", leibniz(terms));


return 0;

}
