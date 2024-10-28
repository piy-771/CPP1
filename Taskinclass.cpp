#include <iostream>
using namespace std;

class Y;
class X{

int per;
public:
X(int per){
    this->per = per;
    }
friend void greaterThan(X,Y);
};
class Y{
int per;
public:
Y(int per){
this->per = per;
}
friend void greaterThan(X,Y);
};
void  greaterThan(X ob1,Y ob2){
if(ob1.per>ob2.per){
    cout<<ob1.per<<" is a highest";
}else{
cout<<ob2.per<<" is a highest";
}
}
int main(){
    X t1(1000);
    Y t2(90);
    greaterThan(t1,t2);

}
