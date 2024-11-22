//We suppose that NEGATIVE input is IMPOSSIBLE

#include <stdio.h>
#include <stdlib.h>

unsigned int isodd(unsigned int num){

return (num % 2==0)?0:1;

}

unsigned int collatz(unsigned int n){
static int steps=0;
unsigned int term;


if (isodd(n))
    term=n*3+1;
else
    term=n/2;

steps++;

printf("Step No: %d, Term is: %d\n", steps, n);

return (n<=1?1:collatz(term));

}


int main(int argc, char **argv)
{

if (argc != 2) {
    printf("Program needs to be called as `./prog number`\n");
    return 1;
}
else
    collatz(atoi(argv[1]));

return 0;

}