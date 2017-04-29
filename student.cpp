#include<iostream>
using namespace std
struct student
{
char name [20];
char dob[10];
int roll;
}
int main()
{
struct student s[10];
int i,n;
cout<<"how many stu details u want"<<\n;
cin>>n;
for(i=0;i<n;i++)
{
cout<<"name:"
cin>>s[i].name;
cout<<"dob:"
cin>>s[i].dob;
cout<<"roll:"
cin>>s[i].roll;
}
cout<<"displaying details:"<<\n;
for(i=0;i<n;i++)
{
cout<<s[i].name<<" "<<s[i].dob<<" "<<s[i].roll<<" "<<\n;
}
return 0;
}




