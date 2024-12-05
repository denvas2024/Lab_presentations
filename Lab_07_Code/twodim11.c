#include <stdio.h> 

#define Rows 6
#define Columns 10

void print_array(int printarray[Rows][Columns]) {

for (int i=0;i<Rows;i++) {
    for (int j=0;j<Columns;j++)
        printf("%d\t",printarray[i][j]);
    printf("\n");
}
}

int main() {

int A[Rows][Columns];

for (int i=0;i<Rows;i++) 
    for (int j=0;j<Columns;j++)
        A[i][j]=5*(5-i)+j*(9-j);

print_array(A);

}