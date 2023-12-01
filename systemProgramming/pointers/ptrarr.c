#include <stdio.h>
int main(){
    int a=10;
    int table[10];
    int *p;
    // p=&a;
    p=table;
    *(p+4)=45;
    printf("Value at %u address is %d",&table[5],*(p+4));
}