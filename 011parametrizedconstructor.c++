#include <iostream>
using namespace std;
class student
{
int a;
public:
student(int x):a(x)
{
cout<<a<<endl;

}
student()
{
a=1;
cout<<"Default";
}
student take(student &x)
{
return x;
}
void display()
{
cout<<endl<<"Display the value of a"<<endl<<a;
}

};

int main()
{
student obj(2);//value is 2
student obj2;//value is 1
obj2=obj2.take(obj);
obj2.display();
return 0;
}