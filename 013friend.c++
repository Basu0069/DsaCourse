#include <iostream>
using namespace std;

class A
{

int reg;//private
public:
void input()//normal member functions
{
cin>>reg;
}
void output()//normal member function, access data members
{
cout<<reg;
}

friend void take(A &x);//declation of friend function inside the class, object is always passed as argumner

};

void take(A &x)// function definition
{
x.reg=45;
cout<<x.reg;

}
main()
{
A obj;
obj.input();//member function can call using object.function name();
obj.output();
take(obj);
}