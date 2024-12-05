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

int main() {

int A[Rows][Columns];

for (int i=0;i<Rows;i++) 
    for (int j=0;j<Columns;j++)
        A[i][j]=5*(5-i)+j*(9-j);

printf("Original Array:\n\n");
print_array(A);
printf("Transposed Array:\n\n");
print_transposed(A);

}