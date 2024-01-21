#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;

   FILE *fptr;

   char *buff[1000];

	if((fptr=fopen("newfile.txt","w+")) ==NULL )

		{
			 printf("Error in opening file");
			exit(1);
		}
		

			 fputs(" \n THIS IS MY 2nd WRITING IN FILING using fputs\n",fptr);
			
		  int count=fprintf(fptr,"\n THIS IS MY 2nd WRITING IN FILING using printf");
			
			char c;
			c='A';	

			//fputc(c,fptr);

			printf("Writing using Fseek");

					


	

 	fclose(fptr); //close file

	getchar();
  
   	return 0;
}