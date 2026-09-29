#include<stdio.h>
int main()
{
int choice;
int a=10,b=5;
printf("1,addition\n");
printf("2,subtration\n");
printf("3,multiplication\n");
printf("4,division\n");
printf("enter your choice:");
scanf("%d,&choice");
switch (choice)
{
case 1:
printf("sum=%d",a+b);
break;
case 2:
printf("sub=%d,a-b");
break;
case 3:
printf("multiplication=%d",a*b);
break;
case 4:
printf("division=%d",a/b);
break;
}
return 0;
}
