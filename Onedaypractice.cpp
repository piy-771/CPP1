#include <iostream>
using namespace std;

//Que.1
/*class cybrom{
public: void show(){
cout<<"first program";
}
int a,b;  //data member
};
int main(){
    cybrom obj;  //making object now it takes memory
    obj.a = 90;
    cout<<obj.a<<"\n";
    obj.show();
}*/
class Time{
int hour;
int minute;
public:
Time(int hour = 0,int minute = 0){
this->hour = hour;
this->minute = minute;
}
Time operator+(Time &t){
Time temp;
temp.hour = hour + t.hour;
temp.minute = minute + t.minute;
if(temp.minute>60){
    temp.hour++;
    temp.minute = temp.minute - 60;
}
return temp;
}

show(){
cout<<hour<<" hours"<<minute<<" minutes\n";
}
};

int main()
{

    Time t1(2,60);
    Time t2(4,50);
    Time t3 = t1+t2;
    t3.show();
}*/


/*=============================================================================================
Q.3>
Write the definition of a class METROPOLIS in C++ with following description :
4   Private Members   –
MCode  //Data member for Code (an integer)
MName  //Data member for Name (a string)
MPop  //Data member for Population (a int)
Area  //Data member for Area Coverage (a double)
PopDens //Data member for Population Density
CalDen() //A member function to calculate (PopDens = MPop/Area)

Public Members   – Enter()
A function to allow user to enter values of
Mcode,MName,MPop,Area and call CalDen() function
ViewALL() A function to display all the data members
also display a message “Highly Populated Area”  if the Density is more than 12000 */


/*class METROPOLIS{
 int MCode;
 string MName;
 int MPop = 62;
 double Area= 50.32;
 double PopDens;
 public:
  double CalDen(){
 return MPop/Area;
 }
 public:
     void Enter(int Mcode,string MName,int MPop,double Area){
     PopDens = CalDen();
     this->MCode = MCode;
     this->MName = MName;
     this->MPop = MPop;
     this->Area = Area;
     }
     void Display(){
     cout<<"MCode = "<<MCode<<"\n";;
     cout<<"MName = "<<MName<<"\n";
     cout<<"MPop = "<<MPop<<"\n";
     cout<<"Area = "<<Area<<"\n";
     cout<<"Polulation density = "<<PopDens<<"\n";;
     if(PopDens>12000){
        cout<<"Highly Populated Area";
     }
     }
};
int main(){
METROPOLIS m;
//cout<<m.CalDen();
m.Enter(235,"New York",26265,72.23);
m.Display();
}*/
int main(){
int Arr[5]={23,44,5,6,7};
try{
    int i ;
cout<<"Enter the index of particular element that u want to print\n";
cin>>i;
if(i>4){
    throw i;
}
}
catch(int e){
cout<<"out of range\n";
}
}
