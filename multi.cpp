#include<iostream>
using namespace std;
template<class t1,class t2>
class test
{
t1 a;
t2 b;
public:
test(t1 x,t2 y)
{
a=x;
b=y;
}
void show()
{
cout<<a<<"and"<<b<<"\n";
}
};
int main()
{
cout<<"the class template has test1 with float and int data type"<<"\n";
test<float,int>test1(1.23,123);
test1.show();
cout<<"class template test2 with integer and char data type"<<"\n";
test<int,char>test2(100,'u');
test2.show();
return 0;
}

