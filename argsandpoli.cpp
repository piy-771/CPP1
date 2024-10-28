#include <iostream>
using namespace std;
int main(){
                          //ARMSTRONG NUMBER

int n,r,t,sum;                              //
cout<<"Enter the three digit number\n";     //
cin>>n;                                     //
t =n;                                       //
sum =0;
while(t!=0){
    r =t%10;
    sum = (r*r*r) +sum;
    t = t/10;
}
if(sum==n){
    cout<<"It is an Armstrong number";
}else{
    cout<<"It is not an Armstrong number";
}

                        //PALINDROME NUMBER
int num,tem,rem;
cout<<"Enter any number\n";
cin>>num;
tem =num;
int sum =0;
while(tem!=0){
    rem =tem%10;
    sum = (sum*10) +rem;
    tem = tem/10;
}
if(sum==num){
    cout<<"It is a Palindrome number";
}else{
   cout<<"It is not a Palindrome number";
}



}
