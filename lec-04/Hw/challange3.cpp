// Favorite Tea Input Write a program that takes the user's favorite tea as input using getline and also asks how many cups of tea they want using cin. Display the result in a fun message

#include<iostream>
#include<string>
using namespace std;
int main(){
     
    cout<<"enter your fav tea\n";
    string favTea="";
    getline(cin,favTea);
    
    cout<<"number of cups you want\n";
    int numofCups;
    cin>>numofCups;

    cout<<"your"<<" "<<numofCups<<" "<<favTea<<" landed soon on your table";
    return 0;

}










