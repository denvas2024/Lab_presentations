//Fibonacci with recursion

#include <stdio.h>

long int iterations=0;

int fib(int n){

int term;

iterations++;

switch (n) {

case 0: 
        return 0;
case 1: 
        return 1;
default: 
        return (fib(n-2)+fib(n-1));
}

}

int main()
{

int terms=0;        

    printf("How many fibonacci terms would you like: ");
    scanf("%d", &terms);

    for (int i=0;i<=terms-1;i++)
        printf("The Nth %d term of Fibonacci sequence, after %ld iterations, is: %d\n", i, iterations, fib(i));

return 0;

}

