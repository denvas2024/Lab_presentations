/*
Collatz function: Recursive
*/

#include <stdio.h>
//#define Starting_Point 950000001
#define Starting_Point 42

/*
Function isodd 
Find whether an int variable is odd(!) or not 
Two version. Uncomment the one you like, and comment the other
*/

/*
int isodd(int num){

return (num % 2==0)?0:1;

}
*/

int isodd(int num){

return (num % 2==0);

}

int collatz(int n){
static int steps=0;
int term;


if (isodd(n))
    term=n*3+1;
else
    term=n/2;

steps++;

printf("Step No: %d, Term is: %d\n", steps, n);

// Tho methods/ways for recursion. Comment/Uncomment to choose the one you like

// 1st method for recursion 
if (n=1)
    return(1);  //That's how the recursion ends
else
    collatz(term);

// 2nd method for recursion 
// return (n<=1?1:collatz(term));

}


int main()
{

int term=Starting_Point;

collatz(term);

return 0;

}