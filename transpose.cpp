#include<iostream>
using namespace std;
int main()
{
int a[10][10],b[10][10],i,j,n,m;
cout<<"enter the order of matrix a \n";
cin>>n>>m;
cout<<"enter the elements of matrix a \n";
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
cin>>a[i][j];
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
cout<<b[i][j];
}
}
}
