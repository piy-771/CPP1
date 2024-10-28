//Exception : Abnormal Condition
//Exception handling : used to avoid Abnormal Condition
//try
//catch
//throw
#include <iostream>
using namespace std;
int main(){
    int a,b;
cout<<"Enter two number\n";
cin>>a>>b;
try{
if(b==0){
    throw b;
}
cout<<a/b<<"\n";;
}
catch(int e){
cout<<"Denominator cannot be zero";
}
cout<<"done";
}
