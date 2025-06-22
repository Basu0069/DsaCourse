#include <iostream>
using namespace std;

class A
{

int reg;
public:
A()
{
cout<<"default";
reg=34;
}

A(int x):reg(x)
{
cout<<"para";
}

A take(A &x)
{

return *this;
}

void display()
{
cout<<reg;
}

};
main()
{
A obj;
A obj1(23);
obj=obj1.take(obj);
obj.display();


}