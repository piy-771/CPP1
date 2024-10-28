#include <iostream>
using namespace std;
class cybrom{
static int x;
public:static void input(int k1){
x =k1;
}
static void show(){
cout<<x<<"\n";
}
};

int cybrom ::x = 900;
int main(){
    cybrom::input(10);
    cybrom::show();
}
