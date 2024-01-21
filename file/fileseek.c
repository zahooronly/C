#include <stdio.h>

int main () {


   FILE *fp;

   fp = fopen("file.txt","w+");

   fputs(" This is my new C file ", fp);
  
   fseek( fp, 7, SEEK_END );

   printf("my cursor is now at char %ld \n",ftell(fp));
	
   fputs(" Repalace with seek", fp);


// remove("newfile.txt"); for file deleting 




   //fclose(fp);
   
   return(0);
}