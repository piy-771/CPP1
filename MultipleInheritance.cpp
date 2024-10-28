#include <iostream>
using namespace std;
class AXIS
{

public :
    void rmsg(){
    cout<<"\n AXIS \n";
    }
    AXIS(){
        cout<<"AXIS\n";
    }
    ~AXIS(){
    cout<<"AXIs dest\n";
    }
};
class SBI{
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

class CUST :public SBI, AXIS
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

