#include <stdio.h>
     #include <fcntl.h>
     #include <sys/types.h>
     #include <sys/stat.h>

     int main()
     {
        int fd;

        fd = open("fileName.txt",O_WRONLY | O_CREAT, S_IREAD | S_IWRITE );

        if (fd == -1)
           {
         printf("Error in file reading and opening");
           }

        close(1);         /* close standard output  */

        dup(fd);       /* fd will be duplicated into standard out's slot */

        close(fd);        /* close the extra slot */

        printf("Hello, world in dup workd!\n");    /* should go to file foo.bar */

        exit (0);         /* exit() will close the files */
     }



**********************************************

#include<stdio.h> 
#include <fcntl.h> 
#include <string.h> 
#include <sys/types.h>
 #include <sys/stat.h>
int main() 
{ 
  int sz;
 
  char *buff[1000];
  
  int fd = open("fileName.txt"", O_WRONLY | O_CREAT | O_TRUNC, 0644); 

	printf("This is my FD %d \n",fd);

  if (fd < 0) 
  { 
      
    printf("Error in file opening \n" );

	exit(0);
  } 
  
//int write(file_descriptor, buffer_pointer, transfer_size)

  sz = write(fd, "hello Filing using sys call  \n", 20); 
  
  printf("\n File writing done with size %d \n" ,sz); 

 //  int read(file_descriptor, buffer_pointer, transfer_size)

	int rsize= read(fd, &buff,10);

  printf("\n data readed from File is size of %d \n",rsize); 



  
  close(fd); 
getchar();


return 0;


} 
******************************************* CHmod 

#include<stdio.h> 
#include <fcntl.h> 
#include <string.h> 
    #include <sys/types.h>
     #include <sys/stat.h>
int main() 
{ 
  int rc;
 
  rc=chmod("fileName.txt"",0744);

printf ("output is %d", rc);

getchar();

return 0;


} 
*************************************** Lseek
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>

int main() {
 char *myfile = "a.txt";
 char buffer[6]; // Including space for null-terminator

// Open the file for reading
 int fd = open(myfile, O_RDONLY);

	if (fd == -1) 
	{
	 perror("Error opening file");
	 return 1;
	 }

// Move the file offset to the last 5 bytes from the end

	 if (lseek(fd, -10, SEEK_END) == -1) 
	{
	 perror("Error seeking file");
	 close(fd);
	 return 1;
	 }

// Read the last 5 bytes

 int bytes_read = read(fd, buffer, 8);

	if (bytes_read == -1) 
	{
	 perror("Error reading from file");
	 close(fd);
	 return 1;
	 }

// Null-terminate the buffer
 buffer[bytes_read] = '\0';

// Close the file

	 if (close(fd) == -1) {
	 perror("Error closing file");
	 return 1;
	 }

printf("Last 5 characters: %s\n", buffer);
return 0;

}