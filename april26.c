#include<iostream>
using namespace std;
int main(){
    float p,r,t,si;
    cout<<"enter principle\n";
    cin>>p;
    cout<<"enter rate per interest\n";
    cin>>r;
    cout<<"enter time period\n";
    cin>>t;
    si = p*r*t/100;
    cout<<si;

}
