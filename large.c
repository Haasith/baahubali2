#include<iostream>
using namespace std;
main()
{
int a[50],n,i,large;
cout<<"enter the number of elements";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter the elements"<<i+1;
cin>>a[i];
}
large=a[0];
for(i+1;i<n;i++)
{
if(a[i]>large)
large=a[i];
}
cout<<"largest element of the array is="<<large<<endl;
}
