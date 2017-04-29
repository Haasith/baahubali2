/*program to find maximum and minimum elements in an array*/
#include<iostream>
using namespace std;
int main()
{
int n,i,small,large;
int a[10];
cout<<"enter the n.o elements into an array"<<endl;
cin>>n;
cout<<"enter the elements into the array"<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
small=a[0];
large=a[0];
{
for(i=1;i<n;i++)
{
if(a[i]>large)
large=a[i];
}
if(a[i]<small)
small=a[i];
}
cout<<"small and large elements in an array"<<small<<large<<endl;
}

