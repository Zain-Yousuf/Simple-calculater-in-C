#include<stdio.h>
int main()
{
 float a,b,sum,sub,mul,dev; 
 char c;
 printf("Enter value of a:");
 scanf("%f",&a);
 printf("Enter value of b:");
 scanf("%f",&b);
 printf("Enter operator:");
 scanf("%s",&c);
 sum=b+a;
 mul=a*b;
 dev=a/b;
 sub=a-b;
 if(c=='-')
 printf("%f",sub);
 else if(c=='+')
 printf("%f",sum);
 else if(c=='*')
 printf("%f",mul);
 else if(c=='/')
 printf("%f",dev);
 
}
