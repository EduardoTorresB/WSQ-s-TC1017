  #include <iostream>
  using namespace std;
  int gcd(int a, int b){
    if (a==0){
      return b;
    }
    else if (b==0){
      return a;
    }
    else{
      if(a>b){
        while(b!=0){
          int x= a/b;
          int y= a%b;
          a=b;
          b=y;
        }
    return a;
    }
    if (b>a){
      while(a!=0){
        int x= b/a;
        int y= b%a;
        b=a;
        a=y;
      }
      return b;
    }
    }

    }
  int main(){
    int x,y,z;
    cout<<"This program calculates the greatest common divisor of two numbers."<<endl;
      cout<<"Type the first number: ";
      cin>> x;
      cout<<"Type the second number: ";
      cin>> y;
        z=gcd(x,y);
      cout<<"The greatest common divisor of the two numbers is: "<<z<<endl;
    return 0;

  }
