/* 
File: decode.c 

usage example:
a)
echo 68650a|decode

b)
decode 
68650a

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{ 

unsigned int ascii_value; // Ascii hex value

do { 

scanf(" %2x", &ascii_value); /* Read first two characters */

fflush(stdout); 
printf("%c", ascii_value);  //Print ascii as character

} while ((char)ascii_value!= 10); /* Go on if we didn't reach end of line */

printf("\nEnd of conversion\n");
return 0;

}

//gcc -o decode decode.c