#include <iostream>
using namespace std;

float babyl (float n)
{
  float a = n;
  float b = 1;
  float e = 0.000001;
  while(a - b > e)
  {
    a = (a + b)/2;
    b = n/a;
  }
  return a;
}
int main ()
{
  float n;

  cout << "Enter a number which you want to calculate its square root:" << endl;
  cin >> n;
  cout << "The square root of " <<n<<" is " << babyl(n) << endl;
  return 0;
}
