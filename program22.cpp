/*program to print the grades of students*/
#include<iostream>
using namespace std;
struct student
{
char name[50];
int roll;
char marks;
}s[5];
int main()
{
cout<<"enter information of students:"<<endl;
for(int i=0;i<3;i++)
{
s[i].roll=i+1;
cout<<"for roll number"<<s[i].roll<<","<<endl;
cout<<"enter name:"<<endl;
cin>>s[i].name;
cout<<"enter marks:"<<endl;
cin>>s[i].marks;
}
cout<<"students information:"<<endl;
for(int i=0;i<3;i++)
{
cout<<"\nroll number:"<<i+1<<endl;
cout<<"name:"<<s[i].name<<endl;
cout<<"marks:"<<s[i].marks<<endl;
}
return 0;
}
