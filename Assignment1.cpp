#include<iostream>
using namespace std;
int main(){

    //que. 9
/*char c;
cout<<"Enter any character\n";
cin>>c;
if((c>='a' && c<='z') ||(c>='A' && c<='Z') )
    {
    cout<<c<<",it is an alphabet";
}
else if(c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c== '7'||c=='8'||c=='9'||c=='0'){
    cout<<c<<",it is a digit";
}else{
    cout<<c<<",it is a special character";
}*/

/*char c;
cout<< "Enter any character\n";
cin>>c;
if(c>='a' && c<='z'){
    cout<<"It is a lowercase alphabet";
    }
    else if(c>='A' && c<='Z'){
            cout<<"It is a uppercase alphabet";}


else{
    cout<<"Invalid input character";
}*/
/*int m;
cout<<"Enter the month number\n";
cin>>m;
if(m>=1 && m<=7){
    if(m%2!=0){
    cout<<"There are 31 days in this month";
}else if(m==2){
cout<<"There are 28 days and in leap year 29 days";}
else{
    cout<<"There are 30 days in this month";
}
}
else if(m>=8 && m<=12){
        if(m%2==0){
            cout<<"There are 31 days in this month";
        }else{
        cout<<"There are 30 days in this month";
        }
}else{
cout<<"Invalid month number";
}*/
/*int w;
cout<<"Enter the week no.\n";
cin>>w;
if(w==1){
    cout<<"Monday";
}else if(w==2){
    cout<<"Tuesday";
}else if(w ==3){
cout<<"Wednesday";
}else if(w ==4){
cout<<"Thursday";
}else if(w==5){
cout<<"Friday";
}else if(w==6){
cout<<"Saturday";
}else if(w==7){
cout<<"Sunday";
}else{
cout<<"Invalid week no.";
}*/
/*int amt,cnt,rem;
cout<<"Enter the amount\n";
cin>>amt;
/*if(amt>=500){
    cnt = amt/500;
    rem = amt%500;
}
    if(rem >=200){
        cnt += rem/200;
        rem = rem%200;
    }
    if(rem>=100){
         cnt += rem/100;
        rem = rem%100;
    }if(rem>=50){
     cnt += rem/50;
    rem = rem%50;
    }
    if(rem>=20){
        cnt += rem/20;
    rem = rem%20;
    }if(rem>=10){
        cnt += rem/10;
    rem = rem%10;
    }if(rem>=5){
        cnt += rem/5;
    rem = rem%5;
    }if(rem>=2){
        cnt += rem/2;
    rem = rem%2;
    }if(rem>=1){
        cnt += rem/1;
    rem = rem%1;
    }
     cout<<"Total no. notes = "<<cnt;*/

 /*    float a,b,c;
     cout<<"Enter the all three angles of triangles\n";
     cin>>a>>b>>c;
     if(a+b+c==180){
        cout<<"Triangle is valid";
     }else{
     cout<<"Triangle is invalid";
     }*/
     /*int a,b,c;
     cout<<"Enter  all three sides of triangles\n";
     cin>>a>>b>>c;
     if((a+b>c) && (a+c>b) && (b+c>a)){
        cout<<"Triangle is valid";
     }
     else{
     cout<< " Triangle is invalid";
     }*/

    /* int a,b,c;
     cout<<"Enter  all three sides of triangles\n";
     cin>>a>>b>>c;
     if(a==b && b==c){
        cout<<"Equilateral Triangle";
     }else if((a==b || a==c|| b==c)){
     cout<<"Isoscalene Triangle";
     }
     else{
        cout<< "Scalene Triangle";
     }*/
    /* int a,sp ,cp;
     cout<<"Enter the Cost Price\n";
     cin>>cp;
     cout<<"Enter the Selling Price\n";
     cin>>sp;
     if(sp>cp){
        cout<<"Profit of "<<sp-cp<<" rupees";

     }else if(cp>sp){
         cout<<"Loss of "<<cp-sp<<" rupees";
     }else{
     cout<<"There is neither profit nor loss ";
     }*/

    /* float phy,che,math,bio,com,per;
     cout<<"Enter the marks of all subjects out of 100\n";
     cout<<"Physics - ";
     cin>>phy;
     cout<<"Chemistry - ";
     cin>>che;
     cout<<"Maths - ";
     cin>>math;
     cout<<"Biology - ";
     cin>>bio;
     cout<<"Computer - ";
     cin>>com;
     per = (phy+che+math+bio+com)*0.2;
     if(per>=90){
        cout<<"Grade A with "<<per<<"%";
     } else if(per>=80){
        cout<<"Grade B with "<<per<<"%";
     }else if(per>=70){
        cout<<"Grade C with "<<per<<"%";
     }else if(per>=60){
        cout<<"Grade D with "<<per<<"%";
     }else if(per>=40){
        cout<<"Grade E with "<<per<<"%";<
     }else{
        cout<<"Grade F with "<<per<<"%";
     }*/
    /* float salary,hra,da,gross;
     cout<<"Enter the salary of employee ";
     cin>>salary;
     if(salary<=10000){
        hra = salary*0.2;
        da = salary*0.8;
     }else if(salary<=20000){
     hra = salary*0.25;
     da = salary*0.9;

     }
     else{
        hra = salary*0.3;
        da = salary*0.95;
     }
     gross = salary+hra+da;
     cout<<"Gross salary of employee is = "<<gross;

     int a;*/
     float unit,bill,total;
     cout<<"Enter the unit\n";
     cin>>unit;
     if(unit<=50){
        bill = unit*0.5;
        }else if(unit<=150){
        bill = (50*0.5)+((unit-50)*0.75);
        }else if(unit<=250){
        bill = (50*0.5)+(100*0.75)+((unit-150)*1.2);
        }else{
        bill = (50*0.5)+(100*0.75)+(100*1.2)+((unit-250)*1.5);
        }

        total = bill+(bill*0.2);
        cout<<"Total electricity bill = "<<total;
}
