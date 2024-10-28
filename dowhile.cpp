#include <iostream>
using namespace std;
int main(){

//Syntax
/*
initialization;
do{
    code/statements;
    increment/decrement;

} while(condition)*/

//my approch, instant thinking
/*int a =2;
do
{

cout<<a<<"\n";
a+=2;
}while(a<=10);*/
/*int a =2;
do
{
if(a%2==0){
   cout<<a<<"\n";
   }

a++;;
}while(a<=10);*/

/*int a =1;
do
{

if(a!=6){                  //another approch
   cout<<a<<"\n";          //if(a==6){
                            //a++;}
   }                        //cout<<a<<"\n";
                             //a++;
a++;
}while(a<=10);*/

/*int u;
cout<<"Enter no.\n";
cin>>u;
int a =1;
if(u>0){
    do
    {
        cout<<u*a<<"\n";
        a++;
    }while(a<=5);
}
else{
    cout<<"not allowed";
}*/
int psw;
cout<<"Enter no.\n";
        cin>>psw;


int cnt = 1;


do{

    if(psw == 1024){
        cout<<"welcome";
        break;


    }
   cout<<"again enter your psd attempy = "<<cnt<<"\n";
   cin>>psw;
   cnt++;
    }while(cnt<5);


}
