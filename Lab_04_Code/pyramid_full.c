#include <stdio.h>


int main(){

int lines, step;

printf("Enter the number of lines: ");
fflush(stdout);
scanf("%d", &lines);

printf("Enter the step to inrease the '*' per line: ");
fflush(stdout);
scanf("%d", &step);


for (int i=1;i<=lines;i++) {
    if (i==1) 
        putchar('*');
    else
        for (int j=1;j<=i*step-1;j++)
            putchar('*');
    // printf("%d", i);
    putchar(10);    //EOL=new line
}


}