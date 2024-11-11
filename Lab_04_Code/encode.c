/* File: encode.c */

#include <stdio.h>
#include <stdlib.h>

int main()
{ 

 int ch; /* Be careful! Declare ch as int because of getchar() and EOF */

 ch = getchar(); /* Read first character */
 while (ch != EOF) { /* Go on if we didn't reach end of file */
    printf("%2.2x", ch);
    ch = getchar(); /* Read next character */
 }
 
 printf("\nEnd of conversion\n");
 return 0;
}

//gcc -o encode encode.c