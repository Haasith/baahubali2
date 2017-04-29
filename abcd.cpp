#include<iostream>
using namespace std;
class rectangle
{
float length,breath;
public:
void set_length(float x)
{
length=x;
}
void set_breadth(float y)
{
breadth=y;
}
flaot perimeter()
{
int c;
c=2*(length+breadth);
return c;
}
float area()
{
int a;
a=length*breadth;
return a;
}
void show(float x,float y);
{
cout<<"the perimeter and area of the rectangle is"<<x<<"and"<<y<<"\n";
}
int same_area(float x,float y)
{
if(x==y)
cout<<"the area of two rectangles is same and their area is "<<x<<"\n";
else
cout<<"the area of two rectangle is not same and their areas is"<<x<<"and"<<y<<"\n";
}
};
int main()
{
rectangle r1,r2,r3;
int a,b,c,d;
r1.set_length(5);
r1.set_breadth(2.5);
r2.set_length(5);
r2.set_breadth(8.9);
a=r1.perimeter();
b=r2.perimeter();
c=r1.area();
d=r2.area();
r1.show(a,c);
r2.show(b,d);
r3.same_area(c,d);
return 0;
}

