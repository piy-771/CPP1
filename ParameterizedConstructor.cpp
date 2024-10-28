#include <iostream>
using namespace std;
class atm{
int code,pwd;
public:
    atm(){
    cout<<"Welcome to atm\n";
    }
    atm(int a,int b){
    code = a;
    pwd = b;
    }
    void show(){
    cout<<"code = "<<code<<"\t";
    cout<<"password = "<<pwd;
    }
};
int main(){
    atm ob;
atm obj(10,2302);
obj.show();
}
