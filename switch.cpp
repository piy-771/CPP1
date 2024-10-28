#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter two number\n";
cin>>a>>b;
cout<<"select 1 for addition , 2 for substraction and 3 for division\n";
cin>>c;
switch(c){
case 1:
    cout<<a+b;
    break;
default:
    cout<<"invalid choice\n";
    break;
case 2:
    cout<<a-b;
    break;
case 3:
    cout<<a*b;






}
/*int a,b,c;
cout<<"enter two number\n";
cin>>a>>b;
cout<<"select 1 for largest , 2 for swap\n";
cin>>c;
switch(c){
case 1:
    {
      if(a>b){
        cout<<"largest no. = "<<a;
    }else{
    cout<<"largest no. = "<<b;
    }
    break;
    }

case 2:
    {
       int temp = a;
    a =b;
    b = temp;
    cout<<"a = "<<a<<"\t";
    cout<<"b = "<<b<<"\t";
    break;
    }

default :
    {
    cout<<"invalid choice";
}

}*/
}

