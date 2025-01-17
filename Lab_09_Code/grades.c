#include <stdio.h>
#include <stdlib.h>

typedef struct listnode *Listptr;

struct listnode {
int data;
Listptr next;
};


void insert_at_start(Listptr *ptr, int grade);
void print_list(Listptr ptr);
float print_average(Listptr ptr);

int main(){

Listptr mylist=NULL;

insert_at_start(&mylist, 10);
//print_list(mylist);
insert_at_start(&mylist, 50);
//print_list(mylist);
insert_at_start(&mylist, 5);
//print_list(mylist);
insert_at_start(&mylist, 22);
print_list(mylist);
printf("The average of the data is: %f\n", print_average(mylist));

free(mylist);

}

void insert_at_start(Listptr *ptr, int grade)
{

Listptr new_grade;

printf("Grade %d: %p\n", grade, ptr);
new_grade=malloc(sizeof(struct listnode));
new_grade->data=grade;
new_grade->next=*ptr;
*ptr=new_grade;

}

void print_list(Listptr ptr){

int i=0; 
while (ptr!=NULL) {
   

printf("Grade %d: %d\n",++i, ptr->data);
ptr=ptr->next;

}
}

void free_mem(Listptr ptr){

while (ptr!=NULL) {
Listptr ptr1;

ptr1=ptr->next;
free(ptr);
ptr=ptr1;

}
}

float print_average(Listptr ptr)
{

int i=0; 
int sum=0;
while (ptr!=NULL) {
   
i++;
sum+=ptr->data;
ptr=ptr->next;

}

return (float)sum/i;

}