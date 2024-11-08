#include <stdio.h>
#define LIMIT 0.008     //Define constant variable

int main() {

float S = 0, c = 1;
int sign = 1;

while (c > LIMIT) {
    S = S + c;
    sign = (-1) * sign;
    c = sign * (1.0 / 2) * c;
}

printf("%f\n", S);

}