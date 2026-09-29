#include<stdio.h>
int main()
{
int a,b,result;
printf("enter a number:");
scanf("%d",&a);
printf("enter a number:");
scanf("%d",&b);
result=a>>b;
printf("RIGHT SWITCH=%d",result);
return 0;
}
