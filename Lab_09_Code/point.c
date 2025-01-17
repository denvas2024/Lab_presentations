#include <stdio.h>

struct point {

double x;
double y;


}; //end struct point

 struct point middle(struct point a, struct point b);

int main() {



struct point a,b, result;

a.x=1.2;a.y=5.4;
b.x=7.3;b.y=1.8;

//    Also
//    struct point a = {1.2, 5.4}; 
//    struct point b = {7.3, 1.8}; 

result=middle(a,b);
printf("The middle of the line has the following coordinates: x=%f , y=%f\n", result.x, result.y);

return 0;

}

struct point middle(struct point a, struct point b) {

struct point median;

median.x=(a.x+b.x)/2;
median.y=(a.y+b.y)/2;

//Also, in case x, y have integer values summing even values,
//median.x=(double)(a.x+b.x)/2;
//median.y=(double)(a.y+b.y)/2;

return median;


} //end function middle
