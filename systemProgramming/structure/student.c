#include <stdio.h>
int main(){
    struct student{
        int roll;
        char name[20];
        float cgpa;
        char degree[10];
        char semester[10];
};
    struct student s1;
    s1.roll=1;
    s1.cgpa=3.5;
    printf("Roll: %d\nCGPA: %f",s1.roll,s1.cgpa);
    
}