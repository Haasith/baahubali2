#include<iostream>
using namespace std;
int main()
{
int x,y,change(int,int);
cout<<"enter the values of x,y \n";
cin>>x>>y;
change(x,y);
cout<<"in main() x="<<x<<"y="<<y;
return 0;
}
int change(int a,int b)
{
int k;
k=a;
a=b;
b=k;
cout<<"in change() x="<<a<<"y="<<b;
}
