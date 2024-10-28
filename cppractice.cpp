#include <iostream>
#include <string.h>
using namespace std;
/*class Top2;
class  Top1{
int n1 = 90;
friend void swp(Top1,Top2);
};

class Top2{
int n2 = 80;
friend void swp(Top1,Top2);
};

void swp(Top1 ob1,Top2 ob2){
cout<<"Before swap = \n"<<"ob1.n = "<<ob1.n1<<"\t"<<"ob2.n = "<<ob2.n2;
int temp = ob1.n1;
ob1.n1 = ob2.n2;
ob2.n2 = temp;
cout<<"After swap = \n"<<"ob1.n = "<<ob1.n1<<"\t"<<"ob2.n = "<<ob2.n2;
}
int main(){
Top1 k;
Top2 l;
swp(k,l);
}*/

/*class A{
    static int c;
public:
static cnt(){
cout<<c;
}

 A(){
c++;
}

};
int A::c=0;
int main(){
A c;
A n;
c.cnt();
}*/

//Shallow copy
/*class student{
char *name;
public:
    student(char *s){
    name = new char[20];
    strcpy(name,s);
    }
    void display(){
    cout<<"name = "<<name<<"\n";
    }
};
int main(){
student obj1("amit");
student obj2(obj1);
obj2.display();
obj1.display();
}*/

//deep copy
/*class student{
char *name;
public:
    student(char *s){
    name = new char[20];
    strcpy(name,s);
    }
    student(student &obj){
    name = new char[20];
    strcpy(name,obj.name);
    }
    void display(){
    cout<<"name = "<<name<<"\n";
    }
    void concat(char *s){
    strcat(name,s);
    }


};
int main(){
student obj1("amit");
student obj2(obj1);
obj2.display();
obj1.display();
obj2.concat("vaerma");
obj2.display();
obj1.display();

}*/

#include <iostream>

// Base class
class Base final{
public:
    // Virtual function with 'final' keyword to prevent overriding
    virtual void display()  {
        cout << "Base class display function" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // This will result in a compilation error because 'display' is final in the base class

    void display() {
        cout << "Derived class display function" << endl;
    }

};

int main() {
    Derived d;
    d.display();  // Calls the Base class's display function

}

