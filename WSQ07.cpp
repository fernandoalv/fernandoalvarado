#include <iostream>
using namespace std;
int main ()
{
  int A,B,C,D=0;
 cout<<"give me the lower range"<<endl;
 cin>>A;
   cout<<"give me the mayor range"<<endl;
   cin>>B;
    C=A;
   do{
     D=D+C;
     C=C+1;

     } while (D<=B);

      cout<<"the sum of the number "<< A <<" to "<< B <<" is: "<< D <<""<<endl;
      return 0;
}
