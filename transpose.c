#include<stdio.h>
void main()
{
int a[10][10],b[10][10],i,j,n,m;
printf("enter the order of matrix a \n");
scanf("%d%d",&n,&m);
printf("enter the elements of matrix a \n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
b[i][j]=a[j][i];
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d",b[i][j]);
}
}
}
