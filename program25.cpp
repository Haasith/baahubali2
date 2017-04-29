//class with member function
#include<iostream>
using namespace std;
class student
{
public:char name[30],classs [10];
       int age,roll;
void enter()
{
cout<<"enter the age and roll n.o"<<endl;
cin>>age>>roll;
cout<<"enter the name and class"<<endl;
cin>>name>>classs;
}
void display()
{
cout<<"student name,class,age and rollno"<<name<<"\n"<<classs<<age<<roll<<endl;
}
};
int main()
{
student obj;
obj.enter();
obj.display();
return 0;
}  
