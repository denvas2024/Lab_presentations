// ./calc 3 + 2
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a,b, result;
	char opr;

	printf("%d\n",argc);
    
	if(argc!=4)
	{
		printf("Invalid arguments...\n");
		return -1;
	}

	//get values
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	
	//get operator
	opr=argv[2][0] ;  
	
	//calculate according to operator
	switch(opr)
	{
		case '+':
			result=a+b;
			break;
		case '-':
			result=a-b;
			break;
		case '*': //not working.Need escape \* or quote '*' The shell is replacing the asterisk with the name of each file in the directory.
			result=a*b;
			break;
        case '/':
			result=a / b;
			break; 
        case '%':
			result=a % b;
			break;    
		default:
			result=0;
			break;
	}
	
	if(opr=='+' || opr=='-' || opr=='*' || opr=='%'|| opr=='/')
		printf("Result: %d %c %d = %d\n",a,opr,b,result);
	else
		printf("Undefined Operator...\n");
	
	return 0;
}