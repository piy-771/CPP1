#include <iostream>
using namespace std;

class RBI
{

    public: virtual void loan(){
    cout<<"APproved by RBI\n";
    }
};
class SBI :public RBI{
public: void accnt()
{

    cout<<"SBI Account\n";
}
void loan(){
cout<<"50000\n";
}
};
class AXIS : public RBI{
public : void accntsaving(){
cout<<"AXIS account\n";
}
void loan(){
cout<<"60000\n";
}
};
int main(){
    //AXIS j;
    //j.loan();
    RBI *p;
    //RBI t;
    //p = &t;   //we call base class function by making its object
    //p->loan();
    SBI s;
    p = &s;
    p->loan();
}
