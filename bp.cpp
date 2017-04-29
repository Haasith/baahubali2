#include<iostream>
using namespace std;
int main()
{
int a,*p,**q;
p=&a;
q=&p;
cout<<"the address of a"<<p<<endl;
cout<<"the address of p"<<q<<endl;
cout<<"the addresses after decrementing"<<endl;
p-=2;
q-=2;
cout<<"the address of a"<<p<<endl;
cout<<"the address of p"<<q<<endl;
}
