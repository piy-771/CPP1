#include <iostream>
using namespace std;
void display(int (&k)[5]){
for(int i =0;i<5;i++){
    k[i] =k[i]+10;
}
}
void prime(int n[5]){

   for(int i =0;i<5;i++){
        int flag =1;
   if(n[i]<=1){
    break;
   }
        for(int j =n[i]-1;j>=2;j--){
         if(n[i]%j==0){
             flag = 0;
             break;
         }
    }
    if(flag==1){
         cout<<n[i]<<"\n";
    }

   }

}
int main(){
int a[] = {20,56,82,5,36};
display(a);
for(int i =0;i<5;i++){
    cout<<a[i]<<"\n";
}

/*int b[] = {7,56,11,0,36};
prime(b);*/
}
