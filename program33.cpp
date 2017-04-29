//program to implement friend function
#include<iostream>
using name space std;
class box
{
double width;
public: friend void printwidth(box b);
        void setwidth(double width);
void box::setwidth(double wid)
{
width=wid;
}
void printwidth(box b)
{
cout<<"width is:"<<b.width<<endl;
int main()
{
box b;
b.setwidth(10.3)
printwidth(b)
return 0;
}
