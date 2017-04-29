#include<iostream>
#include<string.h>
using namespace std;
int add(int,int);
float add(float,float);
void add(char [],char []);
int main()
{
char p[20]="sai";
char q[20]="kiran";
cout<<add(4,4)<<"\n";
cout<<add(0.4f,0.4f)<<"\n";
add(p,q);
return 0;
}
int add(int a,int b)
{
return(a+b);
}
float add(float c,float d)
{
return(c+d);
}
void add(char p[20],char q[20])
{
cout<<strcat(p,q)<<endl;
}
