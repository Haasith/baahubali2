//program to perform static data member
#include<iostream>
using name space std;
class item
{
static int count;
int n;
public:void getdata(int a)
{
n=a;
count++;
}
void getcount(void)
{
cout<<"n"<<;
cout<<"count="<<count<<endl;
}
};
int item::count;
int main()
{
item a,b;
a.getdata();
b.getdata();
a.getcount(100);
b.getcount(100);
cout<<"after reading data"<<endl;
a.getdata();
b.getdata();
return 0;
}

