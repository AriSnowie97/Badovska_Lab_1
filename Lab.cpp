#include <iostream>
using namespace std;
int main() {
  int num;
  cout<<"Enter number: ";
  cin>>num;
  if (num%2 == 0){
    cout<<"Even number"<<endl;
  }
  else if(num%2 !=0){
    cout<<"Odd number"<<endl;
  }
  else {
      cout<<"Error"<<endl;
      }
}
