#include <iostream>>
#include <string.h>
using namespace std;
class tcs{
char n[20];
int salary;                                //character is a constant character
public:
tcs(char name[20],int salary){
//this->name[20] = name[20];
strcpy(n,name);
this->salary = salary;
cout<<"Name = "<<name;
cout<<"Salary = "<<salary;
}
};
int main(){
tcs ob("piyush",300000);
}
