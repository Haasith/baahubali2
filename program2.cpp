/*program to find largest number among the three*/
#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter the three numbers"<<endl;
cin>>a>>b>>c;
if(a>b&&a>c)
cout<<a<<"is the largest number";
else if(b>c)
cout<<b<<"is the largest number";
else
cout<<c<<"is the largest number";
return 0;
}
