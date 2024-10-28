#include <iostream>
using namespace std;
class RBI{
    public:RBI(){
        cout<<"RBI memory \n";
    }
protected: int a = 90;
public:void show(){
cout<<"RBI ="<<a<<"\n";
}

protected: error(){
cout<<"approved by RBI \n";
}
};

class SBI:public RBI{
    public:SBI(){
        cout<<"SBI memory \n";
    }
int d = 60;
public :void fshow(){
cout<<"SBI = "<<d<<"\n";
cout<<"RBI = "<<a<<"\n";
error();
}
};
int main(){
    SBI s;

    s.fshow();

}


