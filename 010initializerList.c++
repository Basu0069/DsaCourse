// intializer list 
#include <iostream>
using namespace std;

class student {
    int reg;
    double cgpa;

public:
    // Default Constructor
    student() {
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    student(int x, double y) {
        reg = x;
        cgpa = y;
        cout << "Parameterized Constructor Called" << endl;
        cout << "Reg: " << reg << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    student obj1;                 // calls default constructor
    student obj2(1234, 9.8);      // calls parameterized constructor

    return 0;
}











// intializer list 
#include <iostream>
using namespace std;

class student {
    int reg;
    double cgpa;

public:
    // Default Constructor
    student() {
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    student(int x, double y) {
        reg = x;
        cgpa = y;
        cout << "Parameterized Constructor Called" << endl;
        cout << "Reg: " << reg << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    student obj1;                 // calls default constructor
    student obj2(1234, 9.8);      // calls parameterized constructor

    return 0;
}














// it an itnialized the constant data member 






// intializer list 
#include <iostream>
using namespace std;
class student
{
int reg;
double cgpa;
const int m=3;
public:
student()
{
cout<<"default"<<endl;
}
student (int x, double y,int z):reg(x),cgpa(y),m(z)
{
cout<<"initializer"<<endl<<reg<<endl<<cgpa<<endl<<m;
}


};

int main()
{
student obj;// default c onstructor
student obj1(1234,9.8,7);

return 0;
}














