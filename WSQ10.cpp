#include <iostream>
#include <cmath>
using namespace std;

float suma (float n[],int length)
{
int i;
float sum=0.0;
for(i=0;i<length;i++)
{
sum=sum+n[i];
}
return sum;
}


int main()
{
float lista[10];
float devi;
float prome,var,varp=0;
cout<<"Introduce ten numbers in this program: "<<endl;
for (int i=0;i<10;i++)
{
cin>>lista[i];
}
cout<<"The sum of the ten numbers is: "<<suma(lista, 10)<<endl;
prome=(suma(lista, 10))/10;
cout<<"The average of the ten numbers is: "<<prome<<endl;

for(int j=0;j<10;j++)
{
	varp=varp+((lista[j]-prome)*(lista[j]-prome));

}
var=varp/10;
devi=sqrt(var);
cout<<"The standard deviation of the ten numbers is: "<<devi<<endl;

return 0;
}
