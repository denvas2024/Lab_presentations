//Fibonacci with recursion


#include <stdio.h>
#define Iteration 8

int iterations=0;

int fib(int n){

iterations++;

//printf("Iteration: %d, Term: %d\n", n, term); //Testing purposes

switch (n) {

case 0: 
        return 0;
case 1: 
        return 1;
default: 
        return (fib(n-2)+fib(n-1));
}

}

int main(){

printf("For N= %d, and after %d iterations, the Fibonacci Term is: %d\n",Iteration, iterations, fib(Iteration));

return 0;

}