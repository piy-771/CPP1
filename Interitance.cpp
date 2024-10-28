
#include <iostream>
using namespace std;
class RBI{
int a = 90;
public:void show(){
cout<<"RBI ="<<a<<"\n";
}
};

class SBI:public RBI{
int d = 60;
public :void fshow(){
cout<<"SBI = "<<d<<"\n";
}
};
int main(){
    SBI s;
    s.show();
    s.fshow();

}
