#include<iostream>
using namespace std;
class complex
{
int real,imag;
public:
void getdata()
{
cout<<"enter real and imag:";
cin>>real>>imag;
}
friend void add(complex ,complex );
};
void add(complex c1,complex c2)
{
 complex c3;
c3.real=c1.real+c2.real;
c3.imag=c2.imag+c1.imag;
cout<<c3.real<<"+i"<<c3.imag;
}
main()
{
complex obj1,obj2;
obj1.getdata();
obj2.getdata();
add(obj1,obj2);
}

