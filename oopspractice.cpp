#include <iostream>
using namespace std;
class bankAccount{
public:
    string nameOfDepositer;
    int accountNumber;
    string typeOfAccount;
    int balance;
    string password;

    bankAccount(string nameOfDepositer,int accountNumber,string typeOfAccount,int balance,string password){
    this->nameOfDepositer = nameOfDepositer;
    this->accountNumber = accountNumber;
    this->typeOfAccount = typeOfAccount;
    this->balance = balance;
    this->password = password;
    }
    void display(){
    cout<<"Name of Depositer = "<<nameOfDepositer;
    }
};
int main(){
bankAccount("piyush",525154845,"saving",50000,"kite");
}
