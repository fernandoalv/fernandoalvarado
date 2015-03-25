#include <iostream>
using namespace std;
 int mcd(int a, int b){
    if (a==0){
     return b;
     }
     if (b==0){
     return a;
     }
     if (a==b){
       return b;
     }
     if(b<a){
     return mcd(b,a%b);
     }
     else {
     return mcd(a,b%a);
     }}
     







    int main()
     {
     int a,b;
     cin>>a;
     cin>>b;

     int resp= mcd(a,b);

     cout<< resp <<endl;
     return 0;
     }
