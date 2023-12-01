#include <stdio.h>
int main(){
    int a=10;
    int *p;
    p=&a;
    a=23;
    printf("%u\n",*p);
    printf("%u\n",p);
    printf("%u\n",*&a);
    printf("%u\n",&a);
    // printf("%u\n",p);
    printf("%p",p);
}