#include<iostream>
#include<cstring>
using namespace std;
class media
{
protected:char titles[50];
float prices;
public:
media(char*s,float a)
{
strcpy(title,s);
price=a;
}
virtual void display()
};
class book:public media
{
int pages;
public:
book(char*s,float a,int p)
{
pages=p;
}
void display();
};
classtape:public media
{
float time;
public:
tape(char*s,float a,float t)
{
time t;
}
void display(_;
};
void book::display();
cout<<"\n title:"<<title;
cout<<"\n pages:"<<pages;
cout<<"\n price:"<<price;
}
void tape::display()
{
cout<<"\n title:"<<title;
cout<<"\n play time:"<<time<<"mins";
cout<<"\n price:"<<price;
}
int main()
{
char*title=new char[30];
float price,time;
int pages;
//book details
cout<<"\n enter the book details\n";
cout<<"title:";
cin>>title;
cout
