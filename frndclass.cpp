#include<iostream>
using namespace std;
class Twovalue
{
int a;
int b;
public:
Twovalue(int i,int j)
{
a=i;
b=j;
}
friend class Min;
};
class Min
{
public:
int min(Twovalue x);
};
int Min::min(Twovalue x)
{
return x.a<x.b?x.a:x.b;
}
main()
{
Twovalue ob(40,20);
Min m;
cout<<m.min(ob);
}

