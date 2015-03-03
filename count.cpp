#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
  int C,B,D=0;
  srand(time(NULL));
  B=rand() % 100 + 1;

    do {
      D=D+1;
      cout<<"please guess a number between 1 and 100"<<endl;
      cin>> C;
      if (C>B)
        cout<<"the number is high, instert a low number"<<endl;
      else if (C<B)
        cout<<"the number is to low, instert a high number"<<endl;
      } while (C!=B);
      cout<<"correct! " << C << " Is the number"<<endl;
      cout<<"you made " << D << " guesses"<<endl;






}
