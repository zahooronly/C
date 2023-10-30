#include <stdio.h>
// int main(){
//     int c;
//     c = getchar();
//     putchar(c);
//     printf("%d\n",c);
// }
int main (int argc, char* argv[]){
    char c='s';
    printf("%d you entered\n",c);
    printf("%s: %s\n", "the zeroth arg is the program name", argv[0]);
    printf("%s: %s\n", "the first argument is", argv[1]);
    printf("%s: %s\n", "the second argument is", argv[2]);
}