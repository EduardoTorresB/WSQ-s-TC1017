#include <iostream>
using namespace std;
int main()
{
float f,c;
cout << "Type the temperature in Farenheit: ";
cin>>f;
  c = 5*(f-32)/9 ;
cout << "The temperature in Celsius is: " << c << " C" << endl ;
if (c > 100)
{
  cout << "Water boil at this temperature (under typical conditions)." ;
}
else
{
  cout << "Water does not boil at this temperature (under typical conditions)." ;
}
}
