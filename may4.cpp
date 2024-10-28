#include <iostream>
#include <iomanip>
using namespace std;
int main(){
/*int r;

cout<<"Enter meter reading\n";
cin>>r;
if(r<0){
    cout<<"invalid reading";
}else if(r>=1 && r<=200){
cout<<"your bill - "<<r*5;
}
else if(r>=201 && r<=500){
    cout<<"your bill - "<<r*6;
}
else if(r>=501 && r<=1000){
    cout<<"your bill - "<<r*8;
}
else{
   cout<<"your bill - "<<r*10;
}*/

/*char ch;
cout<<"Enter any character\n";
cin>>ch;
if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
    cout<<"vowel";
}
else{
    cout<<"consonant";
}*/

float p,c,m,per;
cout<<"Enter the marks of Physics\n";
cin>>p;
cout<<"Enter the marks of Chemistry\n";
cin>>c;
cout<<"Enter the marks of Math\n";
cin>>m;
if(p>35 && c>35 && m> 35){
    per  = (p+c+m)/3;
    if(per>=35 && per<=50){
        cout<<"You got 3rd rank with "<<per<< " %";
    }else if(per>50 && per <=60){
    cout<<"You got 2nd rank with "<<per<<" %";
    }else{
    cout<<"You got 1st rank with "<<per<<" %";
    }

}
else if(p>35 && c>35 && m<=35){
    cout<< "you got supply in maths";
}
else if(p>35 && m>35 && c<=35){
    cout<< "you got supply in chemistry";
}else if(m>35 && c>35 && p<=35){
    cout<< "you got supply in physics";
}
else {
    cout<<"You failed in exam";
    }



}

