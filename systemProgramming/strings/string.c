#include <stdio.h>
#include <string.h>
int main () {
	char greeting[100];
   	char str1[]= "Hello";
	char str2[]= "Hell0"; 
	char str3[20];
    printf("Please enter a string less than 100 characters");
	scanf("%s", greeting);
	printf("string you enter %s\n" , greeting);
    int length = strlen(greeting);
	printf("Length of string you enter is %d\n " , length);
	int cmp=strcmp(str1,str2);
	printf("comparison is: %d \n",cmp);
	strcpy(str3, str1);
	printf("now string 3 is %s \n" ,str3);
	return 0;
}
