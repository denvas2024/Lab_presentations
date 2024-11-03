/* File: readint.c */
#include <stdio.h>
int main() {
    
    int number;
    
    printf("Please give me a number: ");
    fflush(stdout);
    scanf("%d", &number);
    printf("I just read this number: %d\n", number);

return 0;

}