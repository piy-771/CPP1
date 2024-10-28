//write a program to count the total no.of digit in number enter by user.
#include<iostream>
using namespace std;
int main(){
/*    cout<<INT_MAX<<"\n";
    cout<<INT_MIN<<"\n";
int n,c;
cout<<"enter number\n";
cin>>n;
c =0;
while(n!=0){
    c++;
    n = n/10;
}
cout<<"count digit = "<<c;

      //*/

      //program to find the first and last digit of any number
    /*  int n,last,first;
      cout<<"enter number\n";
      cin>>n;
      last = n%10;

      while(n!=0){
        first =n;
        n = n/10;

      }

      cout<<"sum = "<<first+last;*/

      int n,c;
      cout<<"enter number\n";
      cin>>n;
      c =0;
      for(int i =1;i<=n;i++){
        if(n%i==0){
          cout<<i<<"\t";
          c++;
        }
      }
      cout<<"factors = "<<c;
}
