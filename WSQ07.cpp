#include <iostream>
using namespace std;

int main()
{
  int a,b,sum,i;

  cout<<"Enter the lower bound: ";
  cin>>a;
  cout<<"Enter the upper bound: ";
  cin>>b;
  sum = 0;
  for (i=a;i<=b;i++)
  {
    sum = sum + i;
  }
  cout<<"The sum from "<<a<<" to "<<b<<" is: "<<sum;
  return 0;
}
