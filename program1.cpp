/*program to find smallest number among the three*/
#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter the three numbers"<<endl;
cin>>a>>b>>c;
if(a<b&&a<c)
cout<<a<<"is the lowest number";
else if(b<c)
cout<<b<<"is the lowest number";
else
cout<<c<<"is the lowest number";
return 0;
}
