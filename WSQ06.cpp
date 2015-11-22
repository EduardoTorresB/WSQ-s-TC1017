#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  int scrt, guess;
  int cont=0;
  srand (time(NULL));
  scrt = rand() % 100 + 1;
  do {
    cout<<"Guess the number (from 1 to 100): ";
    cin>>guess;
    cont=cont+1;
    if (scrt<guess)
    {
     cout<<"The secret number is lower, guess again. "<<endl;
   }
    else if (scrt>guess)
  cout<<"The secret number is higher, guess again. "<<endl;
} while (scrt!=guess);

  cout<<"Congratulations, you guessed the number!"<<endl;
  cout<<"Number of tries before guessing: "<<cont;
  return 0;
}
