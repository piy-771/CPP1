//A function calling itself is called recursion
/*there are two type of recursion
1. head recursion
2. tail recursion*/
#include <iostream>
using namespace std;

int recur(int n){
    if(n==0){
        return 0;
    }

//cout<<n<<"\t";    //head recursion
recur(n-1);
cout<<n<<"\t";   //tail recurtion
}
bool verify(int attempt){
if(attempt==0){
    cout<<"block";
    return true;
}
int psd = 2025;
int get;
cout<<"enter password\n";
cin>>get;
if(psd == get){
    cout<<"welcome";
    return true;
}else{
cout<<"wrong password try again/n";
return verify(attempt-1);
}
}



int main(){
int n;
cout<<"enter any number\n";
cin>>n;
recur(n);
//verify(3);


}
