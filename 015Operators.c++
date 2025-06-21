#include <iostream>
using namespace std;

class A{
int a;
public:
A()
{
a=3;
}
void operator ++()
{
++a;
cout<<a;
}


};

int main()
{
A obj;//call my constructor
++obj;
obj++;
return 0;
}















// mext code 
#include <iostream>
using namespace std;

class A{
int a;
public:
A()
{
a=3;
}
void operator ++()
{
++a;
cout<<a;
}

void operator++(int){

a++;//4
cout<<endl<<"Post Increment"<<endl<<a;
}



};

int main()
{
A obj;//call my constructor
++obj;
obj++;
return 0;
}




// code
#include <iostream>
using namespace std;

class A{
int a;
public:
A()
{
a=3;
}
friend void operator++(A &obj) ;
friend void operator++(A &obj1,int);

};
void operator++(A &obj)
{
++obj.a;
cout<<obj.a;

}
void operator++(A &obj,int)
{
obj.a++;
cout<<obj.a;

}
int main()
{
A obj;//call my constructor
++obj;
obj++;
return 0;
}



// code 


#include <iostream>
using namespace std;

class A{
int a;
public:
A()
{
a=3;
}
A(int x):a(x)
{
cout<<"Para";
}

void operator+(A &x)
{
cout<<(*this).a+x.a;
}
};

int main()
{
A obj;
A obj1(4);
obj+obj1;//obj.operator+(obj1)

return 0;
}



// code 

#include <iostream>
using namespace std;

class A{
int a;
public:
A()
{
a=3;
}
A(int x):a(x)
{
cout<<"Para";
}

A operator+(A &x)
{
return x;
}
void display()
{
cout<<endl<<endl<<a;
}
};

int main()
{
A obj,obj2;
A obj1(4);
obj2=obj+obj1;//obj.operator+(obj1)
obj2.display();
return 0;
}


// code 
#include <iostream>
using namespace std;

class A{
int a;
public:
A()
{
a=3;
}
A(int x):a(x)
{
cout<<"Para";
}

A operator+(A &x)
{
A temp;
temp.a=(*this).a+x.a;
return temp;

}
void display()
{
cout<<endl<<endl<<a;
}
};

int main()
{
A obj,obj2;
A obj1(4);
obj2=obj+obj1;//obj.operator+(obj1)
obj2.display();
return 0;
}