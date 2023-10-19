#include <stdio.h>
int main(){
    char str[100], key;
    int i, flag = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to search: ");
    scanf(" %c", &key);
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == key){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("Found at index %d\n", i);
    }else{
        printf("Not found\n");
    }
    return 0;
}