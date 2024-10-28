#include <iostream>
using namespace std;
class rbi{
public : virtual void loan() = 0;
virtual void show() = 0;
};
class sbi :public rbi{
public: void loan(){
cout<<"8.5%\n";
}
void show(){
cout<<"sbi";
}
};
class axis:public rbi{
    public:
    axis(){
    cout<<"axis";
    }
void show(){
cout<<"axis\n";
}
};
int main(){
rbi *p;
sbi a;
axis k;
//p = &k;
//p->show();
//a.show();
}
