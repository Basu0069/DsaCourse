// Patter nquestion


// Q1
#include <iostream>
using namespace std;

void pattern(int n)
{
int i,j;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
cout<<"* ";//5 times for every value of i

}
cout<<endl;
}



}


int main()
{

pattern(5);


return 0;
}




// Q2


#include <iostream>
using namespace std;
void pattern1(int n)
{
for(int i=1;i<=n;i++)
{
for(int j=n;j>=i;j--)
{
cout<<"*";
}
cout<<endl;
}
}
int main() {

pattern1(5);

return 0;
}



// Q3

#include <iostream>
using namespace std;

void pattern(int n)
{
  int i,j;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    cout<<"*";
    cout<<endl;
  }
  
  
  
}


int main() 
{
  
   pattern(5);
   
  
  return 0;
}