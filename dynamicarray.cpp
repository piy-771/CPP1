#include <iostream>
using namespace std;
int main(){

/*int a;
cout<<"enter size of an array\n";
cin>>a;
int *arr = new int(a);//single pointer dynamic array
for(int i = 0;i<a;i++){
    cin>>arr[i];
}
cout<<"stored data\n";
for(int i =0;i<a;i++){
    cout<<arr[i]<<"\n";
}
delete []arr;
arr = NULL;//or 0

cout<<"again\n";
for(int i =0;i<a;i++){
    cout<<arr[i]<<"\n";
}*/

//pointer
/*int p =100;
int *t = &p;
cout<<*t;    //dereference*/

int p =100;
cout<<"address of p="<<&p<<"\n";
int *k =&p;
cout<<"value of k = "<<*k<<"\n";
int **t = &k;
cout<<"address of k="<<t<<"\t";
cout<<"value of k="<<**t;
}
