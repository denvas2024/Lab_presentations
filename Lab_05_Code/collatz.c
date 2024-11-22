/*
Collatz function: Iterative
*/

#include <stdio.h>
#define Starting_Point 42

int isodd(int num){

return (num % 2==0)?0:1;

}

int collatz(int term) {

int steps=1;

printf("Step No: %d, Term is: %d\n", steps, term);

while (term>1) {


    if (isodd(term))
        term=term*3+1;
    else
        term/=2;
    steps++;
    printf("Step No: %d, Term is: %d\n", steps, term);

}   //do while


return steps;

} //Collatz

int main()
{

int terms=Starting_Point;

printf("Number of steps to find the length of Collatz function: %d\n", collatz(terms));

return 0;

} //main