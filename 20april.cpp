#include<iostream>
using namespace std;
int main(){
//int a = 90;

const int a = 71;
cout<<a;
cout<<"done";
//
//\n is used for next line
//for print \n we use double'\' , it nulifies the \n properties
cout<<"\\ndone";

  // Airthmetic +,-,*,/,%
  int b;
  cout<<"Enter the three digit number\n";
  cin>>b;
  int c = b/100;
  int d = b%100;
  int e = d/10;
  int f = d%10;
  cout<<c+e+f;


}
