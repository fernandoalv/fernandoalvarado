#include <iostream>
using namespace std;
int thesum(int x, int y) {
  int answer= x+y;
 return answer;
 }
 int product(int x, int y) {
   int answer= x*y;
   return answer;
 }
 int div(int x, int y){
   int answer= x/y;
   return answer;
 }
 int div2(int x, int y){
   int answer= x%y;
   return answer;

 }
 int dif(int x,int y){
   int answer= x-y;
   return answer;
 }




int main() {
 int num1, num2;
  cout<<"give me a number"<<endl;
  cin>>num1;
  cout<<"give me other numer"<<endl;
  cin>>num2;

   int sum = thesum(num1,num2);

    cout<<"and the sum of the two numbers is: "<< sum <<endl;

    int pro= product(num1,num2);
    cout<<"The product of the two numbers is: "<< pro <<endl;

    int division= div(num1,num2);
    cout<<"The division of the two numbers is: "<< division <<endl;

    int division2= div2(num1,num2);
    cout<<"The remainder division of the two numbers is: "<< division2 <<endl;

    int rest= dif(num1,num2);
    cout<<"the difference of the two numbers is"<< rest <<endl;


    return 0;
}
