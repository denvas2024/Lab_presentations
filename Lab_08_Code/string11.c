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

char strA[80], strB[80];
int compare;

strcpy(strA, "This is a string.");      
strcpy(strB, "This is another string.");

printf("Use of mystrlen: The length of the string StrA is : %d\n", mystrlen(strA)); //Length=17+1
printf("Use of strlen: The length of the string StrA is : %d\n", (int)strlen(strA)); //Length=17+1
printf("Use of mystrlen: The length of the string Strb is : %d\n", mystrlen(strB));//Length=23+1
printf("Use of strlen: The length of the string Strb is : %d\n", (int)strlen(strB));//Length=23+1

compare=strcmp(strA,strB);
if (compare==0)
    printf("Strings are identical\n");
else  
    if (compare>0 )
        printf("String strA is greater than strB\n");
    else 
        printf("String strB is greater than strA\n");


printf("Use of mystrcat: New string StrA is : %s\n", mystrcat(strA, strB));
printf("Use of strcat:   New string Strb is : %s\n\n", strcat(strB, strA));


printf("Stroke Example\n");
strtok_example(strB);

return 0;
}