#include <stdio.h>
// #define name "Faizan"
int main(int arguments, char *abc[]){
    // printf("arg");
    printf("File name is: %s\n",abc[0]);
    printf("Argument Counter: %d\n",arguments);
    // printf("Constant Name: %s\n",name);
    for(int i=0;i<=arguments;i++){
        printf("%s\n",abc[i]);
    }
}