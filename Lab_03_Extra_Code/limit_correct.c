#include <stdio.h>
#include <stdlib.h>       //3rd stdlib.lib needed in order to use abs

#define LIMIT 0.00008     //Define constant variable

int main() {

float S = 0, c = 1;
int sign = 1;           //sign has to start as negative


// 1st while (c < LIMIT) { //c already lesser than LIMIT
// 2nd while (c > LIMIT) { //c as a TERM is absolute value

while (c > LIMIT) { 
    S = S + (float)sign*c;
    sign = (-1) * sign;
    printf("S=%f, c=%f, sign=%d\n", S, c, sign);
    c = (1.0 / 2) * c;
    printf("New c=%f\n", c);
}

printf("Sum is: %50.40f\n", S);

}