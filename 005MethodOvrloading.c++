#include <iostream>
using namespace std;

void area(int r)
{
cout<<3.14*r*r<<endl;
}

void area(double x)
{
cout<<x;
}

int main()
{

area(1);
area(2.0);//possible if we have different number of arguments, or their data type may be different

return 0;
}