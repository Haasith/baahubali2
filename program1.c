/*program to print smallest of three numbers*/
#include<stdio.h>
void main()
{
int a,b,c;
printf("enter values of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
if(a<b&&a<c)
printf("a i.e%d is smallest number among three",a);
else if(b<c)
printf("b i.e%d is smallest number among three",b);
else
printf("c i.e%d is smallest number among three",c);
}
