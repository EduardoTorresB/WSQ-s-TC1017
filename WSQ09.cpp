#include <iostream>
using namespace std;

int main()
{
int n;
cout << "Enter the number which you want to know the factorial: ";
cin >> n;

double fact;

	for (int i = 0; i <= n; i++){

		if (i == 0)
		fact= 1;
		else
		fact = fact * i;
}
cout <<"The factorial of "<< n << " is: "<< fact << endl;
return 0;
}
