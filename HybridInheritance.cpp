#include <iostream>
using namespace std;
class A{

public :void f1(){
cout<<"A class\n";
}
};
class B:virtual public A{
public:void f2(){
cout<<"B class\n";
}
};
class C:virtual public A{
public:void f3(){
cout<<"C class\n";
}
};
class D:public B,public C{
public:void f4(){
cout<<"D class\n";
};
};

int main(){
    D obj;
    obj.f2();
    obj.f3();
    obj.f4();
obj.f1();    //it comes ambuguous error , cus D class has two path to go for funnction of class A, to resolve this probles we create virtual class to make invisible path to class A to class D
//i.e., class B and class C inherite from class A virtually



}

