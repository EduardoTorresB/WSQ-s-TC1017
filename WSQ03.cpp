#include <iostream>
using namespace std;
int main ()
{
int a, b, sum, dif, prod, divi, rem;
cout<<"Type the first number: ";
cin>>a;
cout<<"Type the second number: ";
cin>>b;
sum=a+b;
dif=a-b;
prod=a*b;
divi=a/b;
rem=a%b;
cout<<"The sum of the two numbers is: "<<sum<<endl;
cout<<"The difference of the two numbers is: "<<dif<<endl;
cout<<"The product of the two numbers is: "<<prod<<endl;
cout<<"The integer based division of the two numbers is: "<<divi<<endl;
cout<<"The remainder of the two numbers is: "<<rem<<endl;
return 0;
}
