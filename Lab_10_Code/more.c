#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 1000    //Set maximum chars per line

int main(int argc, char *argv[])    //Accept only one file name as input
{
    if(argc!=2)
	{
		printf("Invalid arguments...\n");
		return -1;
	}

    FILE *fp;
    char buff[BUFSIZE]; /* a buffer to hold what you read in */
    int lines=0;

    
	printf("Read the file: %s\n",argv[1]);

//Open File for reading

    fp =fopen(argv[1],"r");
    while(fgets(buff, BUFSIZE, fp) != NULL){
        lines++;   //counts lines up to 20
        printf ("%s", buff); 
        if (lines % 20 ==0){
            printf("press Enter to continue");
            getchar();  //Have to press enter
        }
    }  
    printf("\nFinish file reading\n");
    fclose(fp);

//Append new line at the end of the file

    fp =fopen(argv[1],"a");
    fprintf(fp,"\nTest Line 59");
      
    printf("\nFinish file appending\n");
    fclose(fp);


//Copy file
    FILE *fp2;
    fp =fopen(argv[1],"r");
    fp2=fopen("copy.txt","w");
    while(fgets(buff, BUFSIZE, fp) != NULL)
        fprintf (fp2, "%s",buff); 

    printf("\nFinish file reading and copying\n");
    fclose(fp);
    fclose(fp2);
    
//Count number of characters, excluding EOL, EOF

//    fp =fopen(argv[1],"r");
    fp =fopen("test1.txt","r");
    int chars =0;
    char ch;

    while((ch=getc(fp)) != EOF)
        if (ch!='\n')
            chars++;   //number of characters read
    printf("\nFinish file reading\n %d characters read\n",chars);
    fclose(fp);


}