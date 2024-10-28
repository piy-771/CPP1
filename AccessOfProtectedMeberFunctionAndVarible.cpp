#include <iostream>
using namespace std;
class RBI{
protected: int a = 90;
public:void show(){
cout<<"RBI ="<<a<<"\n";
}

protected: error(){
cout<<"approved by RBI \n";
}
};

class SBI:public RBI{
int a = 60;
public :void fshow(){
cout<<"SBI = "<<a<<"\n";
cout<<"RBI = "<<RBI::a<<"\n";
error();
}
};
int main(){
    SBI s;

    s.fshow();

}

