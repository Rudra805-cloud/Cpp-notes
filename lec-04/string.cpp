#include<iostream>
#include<string>
using namespace std;
int main(){
 string favTea="lemon tea";
 // \ as escape charater 
 string dis="fav tar\"";     //output=>fav tar"
 cout<<favTea<<endl;
 cout<<dis<<endl;    
 return 0;
}