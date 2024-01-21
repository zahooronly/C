#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    FILE *fptr;
    char filename[15];
    char ch;
 
    printf("Enter the filename to be opened \n");
    scanf("%s", filename);
    /*  open the file for reading */
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Cannot open file or File not exist  \n");
        exit(0);
    }
    ch = fgetc(fptr);// fetch first character from file 
	
    while (ch != EOF)
    {
        printf ("%c", ch);
        ch = fgetc(fptr); // fetch next character from file 
		
    }
    fclose(fptr);

return 0;
}