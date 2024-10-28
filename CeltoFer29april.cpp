#include<iostream>
using namespace std;
#include<iomanip>;    //<iomanip> is an another external file from which we can access setprecision
 int main(){

cout<<"Enter the temperature in degree celsius\n";
float  c;
cin>>c;
float f = (c * 9/5) + 32;
cout<<"Temperature in fernaheit = "<<fixed<<setprecision(3)<<f;
cout<<9/5;
}


