#include <stdio.h>
int main(){
    FILE *fptr;
    // fptr = fopen("abc.txt", "r");
    fptr = fopen("test.txt", "r");
    char abctext[100];
    if(fptr == NULL){
        fgets(abctext, 100, fptr);
        printf("%s", abctext);
    }
    else{
        printf("File not found");
    }
    // fclose(fp);
    return 0;
}