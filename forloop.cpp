#include <iostream>
using namespace std;
int main(){
                    //SYNTAX   //for loop OR entry loop

     /*if(initialize;condition;increment/decrement){
        code/statement;
     }*/

      /*for(int i =1;i<=10;i++){
            cout<<i<<"\n";
      }*/

      /*for(1;1;0){              //infinite loop   //for(; ;);
        cout<<"bye";
      }*/

                           //ASCII-VALUE
                         /*  for(int i =0;i<=255;i++)
                            {
                            cout<<i<<"="<<char(i)<<"\t";*/

        //que -- Factorial no,

/* int n,a;
 cout<<"enter any number\n";
 cin>>n;
 a=1;
 while(n!=1){
    a = a*n;
    n--;
 }
 cout<<"factorial = "<<a;*/
 /*int sum =0;
 for(int i =1;i<=10;i++){
    sum+=i;
 }
 cout<<"sum = "<<sum;*/
 int n;
cout<<"enter no\n";
cin>>n;
for(int i =1;i<=n/2;i++){
    if(i*i == n){
        cout<<"square root ="<<i;
        break;
    }

}

}
