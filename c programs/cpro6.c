#include<stdio.h>
int main (){
    char name[30];
    int id;
    float sal;
    double bamt;
    printf("Enter your name,idnum,salary,balance amt ");
    scanf("%s%d%f%lf",name,&id,&sal,&bamt);
    printf("\nName=%s\nidnum=%d\nSalary=%f\nBalance amount=%lf\n",name,id,sal,bamt);
    return 0;
}
