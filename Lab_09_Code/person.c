#include <stdio.h>
#include <stdlib.h>

struct person {

char *fname;
char *sname;
char *mname;

};

struct person *person_init(char *firstname, char *lastname, char *middlename);
struct person *childof(struct person father, char *newname);

int main() {

struct person *father, *child;

father=person_init("Dimitrios", "Vassilopoulos", "Dionysios");
child=childof((*father), "Dionysios");

printf("Father name: %s, Father surname: %s, Father middlename: %s\n", (*father).fname, (*father).sname, (*father).mname);
printf("Child's name: %s, Child's surname: %s, Child's middlename: %s\n", child->fname, child->sname, child->mname);

free(father);
free(child);

return 0;

}


struct person *person_init(char *firstname, char *lastname, char *middlename){

struct person *newperson;

newperson=malloc(sizeof(struct person));
newperson->fname=firstname;
newperson->sname=lastname;
newperson->mname=middlename;

return newperson;

}

struct person *childof(struct person father, char *newname)
{

struct person *newperson;

newperson=malloc(sizeof(struct person));
newperson->fname=newname;
newperson->sname=father.sname;
newperson->mname=father.fname;

return newperson;



}