#include <iostream>
using namespace std;
void swp(int &a ,int &b)   //call by reference
{
int t =a;
a =b;
b = t;
}
int main(){
    int x,y;
    cout<<"enter two value\n";
    cin>>x>>y;
    swp(x,y);
    cout<<"x="<<x<<"\n";
    cout<<"y="<<y<<"\n";

}

