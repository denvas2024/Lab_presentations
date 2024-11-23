#include <stdio.h>

int isodd(int n) {
    return (n % 2);
}

int collatz_it(int n) {
    int c = 1;
    while (n != 1) {
        if (!isodd(n)) {
            n = n/2;
            c++;
        } else {
            n = 3*n + 1;
            c++;
        }
    }
    return c;
}

int collatz(int n) {
    if (n == 1){
        return 1;
    } else {
        if (!isodd(n)) {
            return collatz(n/2) + 1;
        } else {
            return collatz(3*n + 1) + 1;
        }
    }
}

int main(int n) {
    printf("Number to find the length of the collatz sequence:");
    scanf("%d", &n);
    printf("Result: %d\n", collatz(n));
}