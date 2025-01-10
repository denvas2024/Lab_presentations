#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRSIZE 80

int mystrlen(char *str) {

if (str == NULL) // if no string was passed (null pointer), just return
    return 0;

int size=0;

while (str[size]!='\0')
    size++;
//while (*str++)
//    size++;

return size;

}

char *mystrcat(char *dest, char *extra) {

if (extra==NULL)  // if no string was passed (null pointer), just return
    return dest;
else if (dest==NULL)
    return extra;

int destsize=mystrlen(dest);
int i=0;

while (extra[i]!='\0'){
    dest[destsize+i]=extra[i];
    i++;  
}

dest[destsize+i]='\0';

return dest;

}

void strtok_example(char *str) {

const char special[]=" .";
char *p;

p = strtok(str, special);   //1st call of strtok

while(p != NULL) {          //Subsequent calls
printf("%s\n", p);
p = strtok(NULL, special);
}

}

int main() {

char *strA, *strB;
int compare;

strA=malloc((STRSIZE+1)*sizeof(char));
strB=malloc((STRSIZE+1)*sizeof(char));

strcpy(strA, "This is a string.");      //Length=17+1
strcpy(strB, "This is another string.");//Length=23+1

printf("Use of mystrlen: The length of the string StrA is : %d\n", mystrlen(strA));
printf("Use of strlen: The length of the string Strb is : %d\n", (int)strlen(strB));

compare=strcmp(strA,strB);
if (compare==0)
    printf("Strings are identical\n");
else  
    if (compare>0 )
        printf("String strA is greater than strB\n");
    else 
        printf("String strB is greater than strA\n");

printf("Use of mystrcat: New string StrA is : %s\n", mystrcat(strA, strB));
printf("Use of strcat:   New string Strb is : %s\n", strcat(strB, strA));


printf("Stroke Example\n");
strtok_example(strB);

return 0;
}