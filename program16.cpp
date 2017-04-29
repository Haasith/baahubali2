/*program to perform swapping of two numbers without using 3rd variable*/
#include<iostream>
using namespace std;
int main()
{
int a,b;
int swap(int *a,int *b);
cout<<"enter values of a and b"<<endl;
cin>>a>>b;
cout<<"before swapping:"<<a<<" "<<b<<endl;
swap(&a,&b);
}
int swap(int *x,int *y)
{
*x=*x+*y;
*y=*x-*y;
*x=*x-*y;
cout<<"after swapping:"<<*x<<" "<<*y<<endl;
return 0;
}


