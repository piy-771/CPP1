#include <iostream>
using namespace std;
class atm{
public:atm(int cardno){
cout<<"Card nO="<<cardno<<"\n";
}
};
class customer :public atm
{
public:customer(int c,int p):atm(c)
{
    cout<<c<<"\n";
cout<<"Password = "<<p<<"\n";
}
};
int main(){
    customer paisa(1001,2025);

}

