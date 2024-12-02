#include <stdio.h>

//Define prototypes of function calls in main

void badf(int, int,  int,  int);
void goodf(int, int,  int *,  int *);

int a=5, b=4, sum=0, diff=0;

int main() {

badf(a, b, sum, diff);

printf("Calling BADF, The sum a+b is: %d, the difference a-b is: %d\n", sum, diff);

goodf(a, b, &sum, &diff);

printf("Calling GOODF, The sum a+b is: %d, the difference a-b is: %d\n", sum, diff);

return 0;

}

/*
** HOW TO COMPILE ** 
gcc -o myfun.c  //Creates myfun.o
gcc -o myprog.c //Creates myprog.o
gcc -c myprog myfun.o myprog.o  //Creates executable myprog

myprog

Also
gcc myprog.c myfun.c -o myprog //Does all the job

*/