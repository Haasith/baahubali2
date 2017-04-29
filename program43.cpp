#include<iostream>
#include<cstring>
using namespace std;
class zooanimal
{
char *name;
int weightdate,weight,cageno;
public:
zooanimal(char*n,int wd,int w,int c)
{
name=new char[20];
strcpy (name ,n);
weightdate=wd;
weight =w;
cageno=c;
}
void print_det()
{
cout<<"\nanimal name:"<<name<<endl;
cout<<"\nanimal weight date:"<<weightdate<<endl;
cout<<"\nanimal weight:"<<weight <<endl;
cout<<"\ncage number:"<<cageno<<endl;
}
};
int main()
{
int n,i,aweight,awd,cageno;
char *aname;
zooanimal *a[10];
cout<<"\nanimal no. of animals:";
cin>>n;
i=1;
while (i<=n)
{
cout<<"\n enter animal"<<i<<"name:";
cin>>aname;
cout<<"\n enter animal weight:";
cin>>aweight;
cout<<"\n enter  animal weight date:";
cin>>awd;
cout<<"\n enter cage no:";
cin>>cageno;
a[i]=new zooanimal(aname,awd,aweight,cageno);
i++;
}
for(i=1;i<=n;i++)
a[i]->print_det();
return 0;
}
