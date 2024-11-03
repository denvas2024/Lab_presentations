/* File: calc_adv_3.c */
#include <stdio.h>
int main() {
    
    int number1;
    int number2;
    int addsub;
    
    printf("Please give the first number: ");
    fflush(stdout);
    
    if (scanf("%d", &number1)!=1) {
        printf("Invalid input for first number. Exiting with code 1.\n");
        return 1;  // Exit with code 1 if input is not a number
    }
    
    printf("Please give the second number: ");
    fflush(stdout);
    if (scanf("%d", &number2)!=1) {
        printf("Invalid input for second number. Exiting with code 1.\n");
        return 1;  // Exit with code 1 if input is not a number
    }
    
    printf("The sum of the two numbers is: %d \n\n", (number1+number2));



return 0;

}