#include <iostream>
using namespace std;
class j1 {
int a = 90;
public:void show(){
cout<<a;
}
};
class j2{
public:display(){
cout<<"display function";
}
};
int main(){
    j1 obj;
    obj.show();
    j2 obj1;
    obj1.display();
}
