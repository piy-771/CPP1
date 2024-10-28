#include <iostream>
using namespace std;
int main(){
/*int n;
cout<<"enter number\n";
cin>>n;
int rev = 0;
while(n!=0){
    rev = (rev*10)+(n%10);
    n = n/10;
}
cout<<"reverse = "<<rev;

/*int n,sum;
cout<<"enter number\n";
cin>>n;
sum = 0;
while(n!=0){
    //r = n%10;
    sum += n%10;
    n = n/10;
}
cout<<"sum = "<<sum;*/
int a,b,mx;
cin>>a>>b;
mx = a>b?a:b;

while(true){
    if(mx%a == 0 && mx%b ==0){
        cout<<mx;
        break;
    }
    mx++;
}

}
