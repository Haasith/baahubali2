/*program to perform new and delete operators*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int num;
cout<<"enter total n.o of students"<<endl;
cin>>num;
float *ptr;
ptr=new float[num];
cout<<"enter gpa of students"<<endl;
for(int i=0;i<num;++i)
{
cout<<"student"<<i+1<<":"<<endl;
cin>>*(ptr+i);
}
cout<<"displaying gpa of students"<<endl;
for(int i=0;i<num;++i)
{
cout<<"student"<<i+1<<":"<<*(ptr+i)<<endl;
}
delete[]ptr;
return 0;
}
