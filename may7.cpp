
#include<iostream>
using namespace std;
int main(){
/*int year;
cout<<"enter year\n";
cin>>year;
if((year%4==0 && year%100 != 0) || year%400==0){
    cout<<"it is leap year";
}
else
    cout<< "it is not a leap year";*/
 /*   char c;
cout<<"enter any character\n";
cin>>c;
if(c>='a' && c<='z')     //it compare a=97(ascii value) to z=122
    {
    cout<<"small letter";
}else{
cout<< "capita letter";
}*/

 char c;
cout<<"enter any character\n";
cin>>c;
if(c>='a' && c<='z') {

    cout<<char(c-32)<<"="<<int(c);
}
else
    cout<<char(c+32)<<"="<<int(c);
}
