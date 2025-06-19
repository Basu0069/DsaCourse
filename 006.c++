#include <iostream>
using namespace std;

int area(int y)
{
return y*y;
}

double area(double r)
{
return 3.14*r*r;
}

int area(int x,int y)
{
return x*y;
}

int main()
{

int a,b;
double c;
a=area(5);
c= area(1.0);
b= area(2,3);
cout<<a<<endl<<b<<endl<<c;

return 0;
}