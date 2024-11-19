/* File: decode_gc.c */

#include <stdio.h>
#include <stdlib.h>

int convert_to_int(char ch){

int int_value;

switch (ch) {
case '0':
    int_value=0; break;
case '1':
    int_value=1; break;
case '2':
    int_value=2; break;
case '3':
    int_value=3; break;    
case '4':
    int_value=4; break;
case '5':
    int_value=5; break;
case '6':
    int_value=6; break;
case '7': 
    int_value=7; break;
case '8':
    int_value=8; break;
case '9':
    int_value=9; break;         
case 'a':
    int_value=10; break;
case 'b':
    int_value=11; break;
case 'c': 
    int_value=12; break;
case 'd':
    int_value=13; break;
case 'e':
    int_value=14; break;         
case 'f':
    int_value=15; break;       
case 'A':
    int_value=10; break;
case 'B':
    int_value=11; break;
case 'C': 
    int_value=12; break;
case 'D':
    int_value=13; break;
case 'E':
    int_value=14; break;         
case 'F':
    int_value=15; break;         
default:
    int_value=-1;

}

return int_value;

}


int main()
{ 

 char lhex, rhex; /* Be careful! Declare ch as int because of getchar() and EOF */
 int ch;
 int i=0;

 do
 {
 lhex=getchar();
 rhex=getchar();
 ch=convert_to_int(lhex)*16+convert_to_int(rhex);

 //printf("%d %d %d\n", lhex, rhex, ch);

 if (ch>-1)
    putchar(ch);

} while (ch>-1); /* Go on until we reach end of file */
 
 return 0;
}

//gcc -o decode_gc decode_gc.c