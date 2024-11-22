//Fibonacci with recursion

#include <stdio.h>
#include <time.h>

#define Iteration 44

long int iterations=0;

int fib(int n, int fib_array[]){

iterations++;

//printf("Iteration: %d, Term: %d\n", n, term); //Testing purposes

switch (n) {

case 0: 
        return 0;
case 1: 
        return 1;
default: 
        if (fib_array[n]!=-1)
            return(fib_array[n]);
        else {
            fib_array[n]= (fib(n-2, fib_array)+fib(n-1, fib_array));
            return fib_array[n];
        }
            
}

}

int main(){

int fib_array[Iteration+1];
clock_t start, end;


for (int i=0;i<=Iteration;i++)
    fib_array[i]=-1;
    
start=clock();
printf("For N= %d, and after %ld iterations, the Fibonacci Term is: %d\n",Iteration, iterations, fib(Iteration,fib_array));
end=clock();

printf("Execution time=%f\n", (double)(end-start)/CLOCKS_PER_SEC);
return 0;

}