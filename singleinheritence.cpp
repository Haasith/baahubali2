#include<iostream>
using namespace std;
class B
{
int a;
public:
int b;
void getab();
int geta();
void showa();
};
class D:private B
{
int c;
public:
void mul();
void display():
};
void B :: getab()
{
a=5;
b=10;
}
int B::geta()
{
return a;
}
void B::showa()
{
cout<<"a="<<a<<"\n";
}
void D::mul()
{
c=b*geta();
}
void D :: display()
{
cout<<"a="<<geta()<<"\n";
cout<<"b="<<b<<"\n";
cout<<"c="<<c<<"\n";
}
int main()
{
D x;
x.getab()
x.mul();
x.showa();
x.display();
x.b=20;
x.mul();
x.display();
return 0;
}
