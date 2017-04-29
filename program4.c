/*program to perform multiplication table*/
#include<stdio.h>
void main()
{
int i,j;
printf("enter the value of j\n");
scanf("%d",&j);
for(i=1;i<=50;i++)
printf("%d*%d =%d\n",j,i,i*j);
}
