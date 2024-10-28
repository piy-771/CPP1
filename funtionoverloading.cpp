#include <iostream>
using namespace std;
class cybrom{
int a, b,c;
public:void sum(int x,int y){
a = x;
b = y;
cout<<"sum of two no. ="<<a+b<<"\n";
}
void sum(int x,int y, int z){
cout<<"sum of three no. ="<<x+y+z<<"\n";
}
void sum(){
cout<<"program of function overloading\n";
}
};
int main(){
    cybrom c;
    c.sum();
    c.sum(10,20);
    c.sum(10,20,30);
cout<<sizeof(c);

}
