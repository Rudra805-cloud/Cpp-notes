// Modify Tea Prices Create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% and display the rounded new price using explicit casting
#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"eneter the base price of tea\n";
    float basePrice;
    cin>>basePrice;

    basePrice=basePrice*0.1+basePrice;

    int newPrice=int(basePrice);

    cout<<"your new price is :"<<newPrice;


    return 0;
}

