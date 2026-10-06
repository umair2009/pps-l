#include<stdio.h>
int main()
{
int a,b;
char choice;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
printf("\nenter an operator(+,-,*,/,%%):");
scanf("%c",&choice);
switch (choice)
{
case'+':
printf("addition=%d\n",a+b);
break;
case'-':
printf("subtraction=%d\n",a-b);
break;
case'*':
printf("muitiplication=%d\n",a*b);
break;
case'/':
if(b!=0)
printf("modulus=%d\n",a/b);
else
printf("modulus by zero is not possibli.\n");
break;
case'%':
if(b!=0)
printf("modulus=%d\n",a%b);
else
printf("modulus by zero is not possibli.\n");
break;
default:
printf("invalid operator.\n");
}
return 0;
}
