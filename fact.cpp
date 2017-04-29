#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
int n,fact;
cout<<"enter the number \n";
cin>>n;
fact = factorial (n);
cout<<fact;
return 0;
}
int factorial(int n)
{
int fact=1;
if(n==0||n==1)
{
return(1);
}
else
{
fact=n*factorial(n-1);
}
return(fact);
}

