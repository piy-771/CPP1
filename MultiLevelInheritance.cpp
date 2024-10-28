#include <iostream>>
using namespace std;
class RBI
{

public :
    void rmsg(){
    cout<<"\n RBI \n";
    }
    RBI(){
    }
};
class SBI:public RBI{
public: void smsg(){
cout<<"\n SBI \n";
}
};

class CUST :public SBI
{

    public : void cmsg(){
    cout<<"\n customer \n";
    }
};

int main(){
    CUST c;
    c.cmsg();
    c.rmsg();
    c.smsg();

}
