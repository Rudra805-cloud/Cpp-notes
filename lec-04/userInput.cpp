#include<iostream>
#include<string>
using namespace std;
int main(){
    string usertea;
    int teaQuantity;


    cout<<"what whould to like to order in tea? \n";
    cin>>usertea;

    //ask for quanitity 
    cout<<"how many cups of "<<usertea <<"\t whould you like to have ?";
    cin>>teaQuantity;
    cout<<teaQuantity;
    cout<<usertea ;
    return 0;


}