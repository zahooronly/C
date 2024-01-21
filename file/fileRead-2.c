#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;

   FILE *fptr;

   char *buff[1000];

	if((fptr=fopen("program.txt","r")) ==NULL )

		{
			 printf("Error in opening file");
			exit(1);
		}
			while (fscanf(fptr,"%s",&buff)!=EOF)//copy number from file into variable 
   			{

  			printf( "Now print data copied from file into Buffer %s ",buff);
		}

 	fclose(fptr); //close file

	getchar();
  
   	return 0;
}