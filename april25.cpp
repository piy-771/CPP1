#include<iostream>
using namespace std;
//Global Variable
int a =400;
int main(){
 //int a=20;
 /*int a =9;
 int b =6;
 a=b;
 cout<<a<<"\n";
cout<<b;*/

//reference variable
int a =9;
int &b =a;
b++;
cout<<a<<"\n";
cout<<b<<"\n";
cout<<&a;
cout<<&b;

}
