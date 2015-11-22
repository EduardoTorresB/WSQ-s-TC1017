#include <iostream>
using namespace std;

int answer;

int sum(int x, int y)
{
int sum=x+y;
return sum;
}
int dif(int x,int y)
{
int rest=x-y;
return rest;
}
int prod(int x,int y)
{
int prod=x*y;
return prod;
}
int div(int x,int y)
{
int div=x/y;
return div;
}
int rem(int x,int y)
{
int rem=x%y;
return rem;
}

int main ()
{
int a,b;
cout<<"Give me one number:"<<endl;
cin>>a;
cout<<"Give me another one: "<<endl;
cin>>b;
cout<<"Choose the operation that you want to do: "<< endl;
cout<<"1.-Sum  2.-Difference  3.-Product  4.-Division"<< endl;
cin>>answer;
if(answer==1)
{
cout<<"The sum of the two numbers is: "<<sum(a,b)<<endl;
}
if(answer==2)
{
cout<<"The difference of the two numbers is "<<dif(a,b)<<endl;
}
if(answer==3)
{
cout<<"The product of the two numbers is "<<prod(a,b)<< endl;
}
if(answer==4)
{
cout<<"The division of the two numbers is "<<div(a,b)<<" and the remainder is "<<rem(a,b)<<endl;
}
return 0;
}
