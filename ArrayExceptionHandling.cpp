#include <iostream>
using namespace std;
int main(){
int arr[2] = {20,34};
int i;
try{
cout<<"enter index\n";
cin>>i;
if(i>1){
    throw i;
}
cout<<arr[i]<<"\n";
}
catch(int e){
cout<<"out of range\n";
}
cout<<"bye bye";

}
