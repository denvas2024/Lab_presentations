#include <stdio.h>
#define Starting_Point 950000001

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


int main()
{

int term=Starting_Point;

collatz(term);

return 0;

}