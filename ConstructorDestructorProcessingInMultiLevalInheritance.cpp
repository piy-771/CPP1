#include <iostream>
using namespace std;
class RBI
{

public :
    void rmsg(){
    cout<<"\n RBI \n";
    }
    RBI(){
        cout<<"RBI\n";
    }
    ~RBI(){
    cout<<"RBI dest\n";
    }
};
class SBI:public RBI{
public: void smsg(){
cout<<"\n SBI \n";
}

SBI(){

        cout<<"SBI\n";
    }
    ~SBI(){
    cout<<"SBI dest\n";
    }
};

class CUST :public SBI
{

    public : void cmsg(){
    cout<<"\n customer \n";
    }
    CUST(){
        cout<<"CUST\n";
    }
    ~CUST(){
    cout<<"CUST dest\n";
    }
};

int main(){
    CUST c;


}
