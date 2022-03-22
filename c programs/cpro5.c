#include<stdio.h>
int main(){
    int a,b,c,d,e;
    float f,g;
    printf("Enter x1:");
    scanf("%d",&a);
    printf("\nEnter y1:");
    scanf("%d",&b);
    printf("\nEnter x2:");
    scanf("%d",&c);
    printf("\nEnter y2:");
    scanf("%d",&d);
    e=(d-b)/(c-a);   //slope
    f=(a+c)/2; //mid x
    g=(b+d)/2;//mid y
    printf("\nThe slope of the line segment is %d\nMidpoint is (%f,%f)\n",e,f,g);
    return 0;

}