#include <iostream>
using namespace std;
class A{
public:int a = 30;
};
class B:public A{
int a = 90;
public :void show(){
cout<<"class B a = "<<a;
cout<<"class A a = "<<A::a;
}
};
int main(){
    B obj;
    obj.show();

}
