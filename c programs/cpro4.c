#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the celcius value");
    scanf("%d",&a);
    b=(a*9/5)+32;
    printf("\nThe fahrenheit value is %d\n",b);
    return 0;
}