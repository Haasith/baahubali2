//using multiple inheritance concept
#include<iostream>
using namespace std;
class A
{
 protected:
 int len;
 public:
 getdetails(int l)
{
 len=l;
}
};
class B
{
 protected:
 int bre;
 public:
getdata(int b)
{
 bre=b;
}
};
class area:public A,public B
{
 public:
 int r;
 int perimeter()
{
 r=2*(len+bre);
 return r;

}
void show()
{
 cout<<"perimeter is \t"<<r;
}
};
main()
{
 area g;
 g.length(5);
 g.breadth(3);
 g.perimeter();
 g.show();
 
}

