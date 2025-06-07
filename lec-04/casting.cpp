#include<iostream>
using namespace std;
int main(){
  float teaPrice=49.20;
  int roundedteaPrice=(int)teaPrice;  //=>here we convert teaprice into integer by this 
  int teaQuantity=2;
 double  total=teaQuantity*teaPrice;
  cout<<total<<endl;
    return 0;
}

