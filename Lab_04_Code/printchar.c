#include <stdio.h>


int main(){

int i=0, rem;

//for (int i=0;i++;i<=255) //In this we do not declare i in previous line

for (i=0;i<=255;i++)
{

rem=i%3;

if (rem==0 && i>=33 && i<=105) 
    printf("%c - (dec: %d, hex: %x)\n", i, i, i);

}

}