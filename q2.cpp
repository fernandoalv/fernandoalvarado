#include <iostream>
using namespace std;

void triangulo( int medida){
   for(int i=1;i<=medida;i++){
    for(int t=1; t<=i;t++){
       cout<<"T";
       }
       cout<< endl;
       }


       for(int i=(medida-1);i>0; i--)
       {
         for(int t=1;t<=i;t++){
         cout<<"T";
         }
         cout<< endl;
         }
  }
         int main(){
          int x;
          cout<<"Dame la medida de tu triangulo"<<endl;
          cin>>x;
          triangulo(x);
          return 0;
        }
