#include <iostream>
using namespace std;
class A{
int a = 30;
};
class B:public A{
int a = 90;
public :void show(){
cout<<"class B a = "<<a;
cout<<"class A a = "<<this.a;
}
};
int main(){
    B obj;
    obj.show();

}
