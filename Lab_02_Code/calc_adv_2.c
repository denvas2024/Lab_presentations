/* File: calc_adv_2.c */
// Input for calcularion is integer

#include <stdio.h>
int main() {
    
    int number1;
    int number2;
    int addsub;
    
    printf("Please give the first number (a): ");
    fflush(stdout);
    scanf("%d", &number1);
    
    printf("Please give the second number (b): ");
    fflush(stdout);
    scanf("%d", &number2);
    
    printf("Would you like addition (0) [a+b] or subtraction (1) [a-b]: ");
    scanf("%d", &addsub);
    
    printf("The result is: %d \n",(addsub==0)?(number1+number2):(number1-number2));

return 0;

}