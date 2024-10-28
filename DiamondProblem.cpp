#include <iostream>
using namespace std;
class SBI
{


    public:void msg(){
    cout<<"SBI\n";
    }
};

class AXIS{
public : void msg(){
cout<<"AXIS\n";
}
};

class CUST:public SBI,public AXIS{
public:
    void custmsg(){
    cout<<"cust\n";
    }
};
int main(){
    CUST obj;
    //obj.msg();//ambiguity
    //we solve this problem by slicing
    //obj.SBI::msg();
    //obj.AXIS::msg();

    //another method is Typecasting
    /*SBI s = obj;
    s.msg();
    AXIS h=obj;
    h.msg();*/


    //smart pointer

    static_cast<SBI>(obj).msg();
    static_cast<AXIS>(obj).msg();

}
