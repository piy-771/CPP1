#include <iostream>
using namespace std;
class Client{
public : void virus(){
cout<<"Hurray!! ur system got hacked";
}

};
class Reward{
Client c;
public : void dollar(){
cout<<"u got $100000000\n";
c.virus();
}
};

int main(){
Reward r;
r.dollar();
}
