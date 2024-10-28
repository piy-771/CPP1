#include<iostream>
using namespace std;
/*int power(int b,int p){
if(p == 0){
    return 1;
}
if(b== 0){
    return 0;
}
return b*power(b,p-1);
}*/

int fibo(int a){
if(a<=1){
    return a;
}

return fibo(a-1)+fibo(a-2);
}
int main(){
    /*int b,p;
    cout<<"Enter base";
    cin>>b;
    cout<<"Enter power";
    cin>>p;
    cout<<power(b,p);*/
    int n;
    cout<<"Enter a nth term";
    cin>>n;
    cout<<fibo(n);

}
