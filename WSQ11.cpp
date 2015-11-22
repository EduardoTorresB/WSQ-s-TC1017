#include <iostream>
#include "BigIntegerLibrary.hh"
using namespace std;
int arr;
int ab;
int nat=0;
int non=0;
int lych=0;
BigInteger rev;
BigInteger num;

BigInteger reverse(BigInteger valid){
BigInteger invalid= 0;
while (valid != 0){
invalid= invalid*10 + valid % 10;
valid= valid/10;
}
return invalid;
}

void palindrome(BigInteger n, BigInteger r){
if(n == r){
nat = nat+1;
}
else {
int rep= 0;
BigInteger a= n;
while (a!=r && rep < 30){
a=a+r;
r= reverse(a);
rep= rep+1;
}
if (rep == 30){
cout << "This is a Lychrel number: " << n << endl;
lych= lych+1;
}
else {
non=non+1;
}
}
}

int main (){
cout << "Introduce the parameter in which you want to find the lychrel numbers." << endl;
cout << " Introduce the upper bound: ";
cin >> ab;
cout << "Introduce the lower bound: ";
cin >> arr;
num = ab;
while(num <= arr){
rev= reverse(num);
palindrome(num, rev);
num = num + 1;
}

cout << " Number of natural palindromes :" << nat << endl;
cout << " Number of non Lychrel numbers : " << non << endl;
cout << "Number of Lychrel numbers: " << lych << endl;

return 0;
}
