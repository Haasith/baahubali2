/*program to illustrate pure virtual functoin*/
#include<iostream>
using namespace std;
class pranay
{
public:virtual void ex=0
};
class c:public pranay
{
public:void ex();
cout<<"enter book written by pranay"<<endl;
};
class oops:public pranay
{
public: void ex();
cout<<"c text book written by pranay"<<endl;
};
int main()
{
c c1;char*a[2];
oopsc2;
a[0]=&c1;
a[1]=&c2;
a[0]->ex();
a[1]->ex();
return 0;
}
