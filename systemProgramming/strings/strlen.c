#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    printf("Enter a string: ");
    scanf("%s",str);
    int length=0;
    for(int i=0;i<=50;i++){
        if (str[i]=='\0'){
            break;
        }
        length++;
    }
    length=0;
    printf("Length is %d\n",length);
    while(length<50){
        if(str[length]=='\0'){
            break;
        }
        length++;
    }
    printf("Length is: %d",length);
}