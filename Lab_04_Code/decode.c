/* 
File: decode.c 
usage example:

a)
decode <decoded_text 

b)
decode <decoded_text >decoded.txt
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{ 

unsigned int ascii_value; // Ascii decimal value

int scan_return=0;

scan_return=scanf(" %2x", &ascii_value); /* Read first two hex characters */

while (scan_return!=-1) /* Keep reading unless we reached end of file */
{

printf("%c",ascii_value);

//printf("%c %d %d \n", ascii_value, ascii_value, scan_return); //Just for testing purposes

scan_return=scanf(" %2x", &ascii_value); /* Read two hex characters */

} 

 //printf("\nEnd of conversion\n");   //Just for testing purposes
 return 0;

}

//gcc -o decode decode.c