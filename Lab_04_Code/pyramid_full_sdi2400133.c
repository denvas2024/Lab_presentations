#include <stdio.h>


int main() {
    int a, c;
    int i, j;
    printf("\nPlease give the number of lines: ");
    scanf("%d", &c);
    printf("\nPlease give the number of asterisks added in each line: ");
    scanf("%d", &a);

    for(i = 1;i <= a*c;i+=a) {
        for (j = 1;j <= i;j++) {
            putchar('*');
        }
        printf("\n");
    }
    return 0;


}