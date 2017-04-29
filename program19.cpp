/*program to perform class with 1 object*/
#include<iostream>
using namespace std;
class book
{
public: int n;
       float f;
};
int main()
{ 
book r;
cout<<"enter the pages of book"<<endl;
cin>>r.n;
cout<<"enter the cost of book"<<endl;
cin>>r.f;
cout<<"pages of the book is "<<r.n<<endl;
cout<<"cost of the book is "<<r.f<<endl;
return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                   
