#include<stdio.h>
main()
{
int x,y,change(int,int);
printf("enter the values of x,y \n");
scanf("%d%d",&x,&y);
change(x,y);
printf("in main() x=%d y=%d",x,y);
}
change(int a,int b)
{
int k;
k=a;
a=b;
b=k;
printf("in change() x=%d y=%d",a,b);
}
