#include <stdio.h>
void main(){
    // int a=10;
    // int b=20;
    // int c=30;
    // int d=40;
    // unsigned int a,b,c,d;
    // printf("Hello World\n");
    // scanf("%d %d %d %d",&a,&b,&c,&d);
    // printf("Values are: %d %i %d %i\n",a,c,b,d);

    int length,table,product;
    printf("Enter the length of table: ");
    scanf("%d",&length);
    printf("Enter table number: ");
    scanf("%d",&table);
    for(int i=1;i<=length;i++){
        product=table*i;
        printf("%d * %d = %d\n",table,i,product);
    }
}