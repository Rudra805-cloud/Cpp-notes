// Tea Information Display Write a program that declares variables to store the type of tea, its price per kilogram (float), and its rating (char). Use data types effectively and print them in a formatted output using escape sequences.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string typeoftea="";
    cout<<"enter type of tea \n"; 
    cin>>typeoftea;
     
    cout<<"enter price per Kg \n";
    float pricePerKg;
    cin>>pricePerKg;

    cout<<"give its rating out of 5 \n";
    int rating;
    cin>>rating;

    cout<< "your tea details are \n"<<typeoftea<<"\n"<<pricePerKg<<"\n"<<rating;

    return 0;
}