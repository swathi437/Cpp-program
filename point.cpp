 #include<iostream>
using namespace std;
class point
{
int x,y;
public:
point()
{
x=5;
y=10;
}
point(int a,int b)
{
x=a;
y=b;
}
void read()
{
cin>>x>>y;
}
void print()
{
cout<<"x="<<x<<"\n";
cout<<"y="<<y<<"\n";
}
};
main()
{
point p1,p2,p3(30,50);
p1.print();
p3.print();
cout<<"enter 2 numbers:";
p2.read();
p2.print();
}

 
