/* File: calc_adv_01.c */
#include <stdio.h>

int main() {
    
    long long int number1;		//Long Long int has 2^64 bit (look the lab pdf)
    long long int number2;
/*
    long long number1;          //same as above two lines
    long long number2;
*/    
        
    printf("Please give the first number: ");
    fflush(stdout);
    scanf("%lld", &number1);
    printf("\nPlease give the second number: ");
    fflush(stdout);
    scanf("%lld", &number2); 
    printf("\nNumber one is: %lld, Number two is: %lld \n", number1, number2);
    printf("\nThe sum of the two numbers is: %lld \n", (number1+number2));

return 0;

}