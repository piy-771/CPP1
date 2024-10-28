#include <iostream>
using namespace std;

class atm{
int amount,*loc;
public:
    atm(atm &t){
        amount = t.amount;
        loc = new int;
        *loc = *(t.loc);

    }
    atm(int amt,int adrs){
    amount = amt;
    loc = new int;
    loc = &adrs;
    }
    void transaction(int a){
    amount = amount + a;
    *loc = *loc + 1;
    }
    void show(){
    cout<<"Balance = "<<amount<<"\t";
    cout<<"location = "<<*loc<<"\n";
    }

};

int main(){
    atm mpnagar(10000,101);
    atm bhel(mpnagar);
    mpnagar.show();
    bbhel.show();
    mpnagar.transaction(1000);
    mpnagar.show();
    bhel.show();

}
