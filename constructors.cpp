#include <iostream>
using namespace std;

class joy{
//default constructor
public:joy(){
cout<<"joy class";
}
//destructor
~joy(){
cout<<"memory clean";
}
void show(){
cout<<"welcome\n";
}
};
int main(){

joy p;
cout<<sizeof(p);
p.show();
cout<<sizeof(p);
}
