 #include<stdio.h>
void main()
{
int i,c,n;
printf("Enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 c=fib(i);
printf("%d",c);
}
}
fib(int p)
{
if(p==0)
{
return 0;
}
else if(p==1)
{
return 1;
}
else
{
return fib(p-1)+fib(p-2);
}
}
