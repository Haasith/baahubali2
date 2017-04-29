/*program to perform command line argument*/
#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
int i;
cout<<"total no of arguments"<<argc<<endl;
for(i=0;i<argc;i++)
cout<<"argv["<<i<<"]"<<argv[i]<<endl;
return 0;
}
