#include<iostream>
#include<cstring>
using namespace std;
class car
{
public:
char *color;
char *body;
car()
{
char *c="blue";
char *b="wagon";
color=c;
body=b;
}
car(char *color1,char *body1)
{
color=color1;
body=body1;
}
void tostring1()
{
cout<<color<<body;
}
};
class funcar:public car
{
public:funcar()
{
car();
}
funcar(char *color1,char *body1)
{
car(color1,body1);
}
void playcd()
{
cout<<"beatuiful music fills the passenger compartment"<<endl;
}
};
int main()
{
funcar mycar;
mycar.playcd();
car fathercar("red","convertable");
cout<<"\n my car is a";
mycar.tostring1();
cout<<"\n my father car is";
fathercar.tostring1();
return 0;
}
