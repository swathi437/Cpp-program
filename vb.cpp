#include<iostream>
using namespace std;
class base
{
public:
int i;
};
class derived1:public virtual base
{
public:
int j;
};
class derived2:public virtual base
{
public:
int k;
};
class derived3:public derived1,public derived2
{
public:
int sum;
};
main()
{
derived3 ob;
ob.i=10;
ob.j=20;
ob.k=30;
ob.sum=ob.i+ob.j+ob.k;
cout<<ob.j<<"";
cout<<ob.j<<""<<ob.k<<"";
cout<<ob.sum;
return 0;
}

