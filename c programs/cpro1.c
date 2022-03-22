#include<stdio.h>
int main()
{
    int r;
    char a[30],b[30],c[20],d[5];
    
    printf("Enter your name\n");
    scanf("%s",a);
    printf("Enter your regnum\n");
    scanf("%d",&r);
    printf("Enter your college\n");
    scanf("%s",b);
    printf("Enter your department\n");
    scanf("%s",c);
    printf("Enter your section\n");
    scanf("%s",d);
    printf("Name=%s\nreg num=%d\nCollege=%s\nDepartment=%s\nSection=%s\n",a,r,b,c,d );
    return 0;
}