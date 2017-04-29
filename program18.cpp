//program to perform student structure
#include<iostream>
using namespace std;
class student
{
public: char name[30],classs[10];
int age,rollno;
void enter()
{
cout<<"enter the age and rollno"<<endl;
cin>>age>>rollno;
cout<<"enter the name and class"<<endl;
cin>>name>>classs;
}
void display()
{
cout<<"student name is "<<name<<endl;
cout<<"student class is "<<classs<<endl;
cout<<"student age is "<<age<<endl;
cout<<"student roll no is "<<rollno<<endl;
}
};
int main()
{
student s;
s.enter();
s.display();
return 0;
}

