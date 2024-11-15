/* File: lowercase.c */
#include <stdio.h>

int main()
{ int ch; 
  ch = getchar();                          
  while (ch != EOF) {        
    if (ch >= 'A' && ch <= 'Z') //Find Uppercase Letter characters  
      ch = ch + ('a'-'A'); 		//+ (instead of - in capitlize.c)
    putchar(ch);                                
    ch = getchar();                              
  }
  return 0;
}
