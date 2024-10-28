#include <iostream>
using namespace std;
int c;
void sum(int a,int b){
c = a+b;
}
void show(){
cout<<"sum = "<<c;
}

int marks(){
return 9;
}
int product(int qty){
return qty*50;
}
int petrol(int litre){

            return litre*80;




}
int main(){
    /*int s,p;
    cout<<"enter 2  no.\n";
    cin>>s>>p;
    sum(s,p);   //call by value
    //sum(3,4);
    show();   //explicit calling*/
    /*cout<<marks()<<"\n";
    int c = product(200);
    cout<<"bill = "<<c;*/
    int t;
    cout<<"how much petrol u want in liter\n";
    cin>>t;
    int profit = petrol(t)*25/100;

    cout<<"bill = "<<petrol(t)+profit;



}
