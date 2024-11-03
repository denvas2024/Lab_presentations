/* File: calc_adv_2_ch.c */
// Input for calculation is character

#include <stdio.h>
int main() {
    
    int number1;
    int number2;
    char addsub;
    
    printf("Please give the first number (a): ");
    fflush(stdout);
    scanf("%d", &number1);
    
    printf("Please give the second number (b): ");
    fflush(stdout);
    scanf("%d", &number2);
    
    printf("Would you like addition (+) [a+b] or subtraction (-) [a-b]: ");
//    scanf("%c", &addsub);  //Wrong: previous ENTER is considered as input Character
      scanf(" %c", &addsub); //SPACE before %c solves the problem

    printf("The result is: %d \n",(addsub=='+')?(number1+number2):(number1-number2));

return 0;

}