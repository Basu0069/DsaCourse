
//  we use pointer to get the desired 

#include <iostream>
using namespace std;

void swap(int *x , int *y )

{
int temp;
temp=*x;
*x=*y;
*y=temp;// CHANGES IN X, Y

}
int main()
{// call by reference- call by reference variable is an alias of another variable
//CALL BY POINTER MEANS - We use pointer to
// void swap(int , int );// function declaration datatype function name (arguments)
int a,b;
cout<<"Enter 2 numbers";
cin>>a>>b;//5, 9

swap(&a,&b);// function call comes, the control switches to function definition

cout<<endl<<"After Swapping"<<endl<<a<<endl<<b;// change of actual arguments in function definition never gets reflected in the values
return 0;
}