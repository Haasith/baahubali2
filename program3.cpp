/*program to check whether given no is prime no or not*/
#include<iostream>
using namespace std;
int main()
{
int num,k=0,i=1;
cout<<"enter a number"<<endl;
cin>>num;
while(i<=num)
{
if(num%i==0)
k++;
i++;
}
if(k==2)
cout<<num<<"is a prime number"<<endl;
else
cout<<num<<"is not a prime number"<<endl;
return 0;
}

