#include<stdio.h>
int main(){
    int num1,num2,quot,rem;
    printf("Enter the num1 and num2: ");
    scanf("%d%d",&num1,&num2);
    quot=num1/num2;
    rem=num1%num2;
    printf("\nThe quotient and reminder are %d and %d.\n",quot,rem);
    return 0;
}