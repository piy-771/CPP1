#include <iostream>
using namespace std;
class RBI{

public : RBI(){
cout<<"RBI constructor\n";
}
~RBI(){
cout<<"RBI destructor\n";
}
};
class SBI:public RBI{
public:SBI(){
cout<<"SBI constructor\n";
}
~SBI(){
cout<<"SBI destructor\n";
}
};
class AXIS:public RBI{
public:AXIS(){
cout<<"AXIS COnstructor\n";
}
~AXIS (){
cout<<"AXIS destructor\n";
}
};

int main(){
    AXIS obj;
    SBI obj1;
    RBI obj2;

}
