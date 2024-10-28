#include <iostream>
using namespace std;
struct cybrom{
    struct bhopal{
    int pincode;
    };
int amit;
float ravi;
void show(){
cout<<"hello";
}
}p;
int main(){
//struct cybrom p;
/*cout<<"enter ur age\n";
cin>>p.amit;
cout<<"enter salary\n";
cin>>p.ravi;
cout<<"age = "<<p.amit<<"\n";
cout<<"salary = "<<p.ravi<<"\n";
p.show();*/
struct cybrom::bhopal pt;
pt.pincode = 90;
cout<<pt.pincode;
}
