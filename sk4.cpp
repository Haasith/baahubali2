#include<iostream>
using namespace std;
class complex
{
float x;
float y;
public:
complex(){}
complex(float real,float imag)
{x=real;y=imag;}
complex operator+(complex);
complex operator-(complex);
void display(void);
};
complex complex::operator+(complex c)
{
complex temp;
temp.x=x+c.x;
temp.y=y+c.y;
return(temp);
}
complex complex::operator-(complex c)
{
complex temp1;
temp1.x=x-c.x;
temp1.y=y-c.y;
return(temp1);
}
void complex::display(void)
{
cout<<x<<"+j"<<y<<"\n";
}
int main()
{
complex c1,c2,c3;
int s;
c1=complex(3.5,2.5);
c2=complex(2.5,1.5);
cout<<"enter choice:";
cin>>s;
switch(s)
{
case 1:
{
c3=c1+c2;
cout<<"c1=";c1.display();
cout<<"c2=";c2.display();
cout<<"c3=";c3.display();
break;
}
case 2:
{
c3=c1-c2;
cout<<"c1=";c1.display();
cout<<"c2=";c2.display();
cout<<"c3=";c3.display();
break;
}
}
return 0;
}


