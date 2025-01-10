#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() { 

    char str0[5] = "Hello"; //not include \0
    char str1[]  = "Hey you friend"; //include \0
    char *str2   = "How are you my friend";
    char *str3;
    str3= malloc(20*sizeof(char));
    printf("Address of str3 is: %p\n", str3);
    str3="How are you dear";
    printf("Address of str3 is: %p\n", str3);

    printf("Size of str0: %li\n", sizeof(str0)); // Prints the size of the array -5
    printf("Size of str1: %li\n", sizeof(str1)); // Prints the size of the array -15 (14 char+'0')
    printf("Size of str2: %li\n", sizeof(str2)); // Prints the size of the pointer: 8bytes=64bit
    printf("Size of str3: %li\n", sizeof(str3)); // Prints the size of the pointer: 8bytes=64bit

    printf("Length of str0 without \\0: %li\n", strlen(str0)); // Prints the size of the array -19! (searches for '0')
    printf("Length of str1 without \\0: %li\n", strlen(str1)); // Prints the size of the array - 14 (without '0')
    printf("Length of str2 without \\0: %li\n", strlen(str2)); // Prints the size of the array: - 21 (without '0')
    printf("Length of str3 without \\0: %li\n", strlen(str3)); // Prints the size of the array: - 16 (without '0')
    
    printf("String str0: %s\n", str0); // Prints "HelloHey you friend"
    printf("String str1: %s\n", str1); // Prints "Hey you friend"
    printf("String str2: %s\n", str2); // Prints "How are you my friend"
    printf("String str3: %s\n", str3); // Prints "How are you dear

    str0[0]='_';
    printf("NEW String str0: %s\n", str0); // Prints "_elloHey you friend"    
    str1[0]='_';
    printf("NEW String str1: %s\n", str1); // Prints "_ey you friend" 
    str2[0]='_'; //seg fault. We can set the whole array but not a single character
    printf("NEW String str2: %s\n", str2); //  
    str3[0]='_'; //seg fault
    printf("NEW String str3: %s\n", str3); // 

    free(str3);
    return 0;
}
