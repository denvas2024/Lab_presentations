#include <stdio.h>

#define Rows 3
#define Columns 5


void print_array(int printarray[Rows][Columns]) {

for (int i=0;i<Rows;i++) {
    for (int j=0;j<Columns;j++)
        printf("%d\t",printarray[i][j]);
    printf("\n");
}
}

void print_transposed(int printarray[Rows][Columns]) {

for (int i=0;i<Columns;i++) {
    for (int j=0;j<Rows;j++)
        printf("%d\t",printarray[j][i]);
    printf("\n");
}
}

void print_reverse(int printarray[Rows][Columns]) {

for (int i=0;i<Rows;i++) {
    for (int j=Columns-1;j>=0;j--)
        printf("%d\t",printarray[i][j]);
    printf("\n");
}
}

int main() {

int A[Rows][Columns];

for (int i=0;i<Rows;i++) 
    for (int j=0;j<Columns;j++)
        A[i][j]=5*(5-i)+j*(9-j);

printf("Original Array:\n\n");
print_array(A);
printf("\nTransposed Array:\n\n");
print_transposed(A);
printf("\nReversed Array:\n\n");
print_reverse(A);
}