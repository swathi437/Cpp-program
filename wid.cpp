#include<iostream>
using namespace std;
main()
{
cout.precision(4);
cout.width(10);
cout<<10.12345<<"\n";
cout.fill('*');
cout.width(10);
cout<<10.12345<<"\n";
cout.width(10);
cout<<"Hi"<<"\n";
cout.width(10);
cout.setf(ios::left);
cout<<10.12345;
}

