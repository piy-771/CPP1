#include <iostream>
using namespace std;
 /*int maxvalue(int aj[],int n){
    int lar = aj[0];
    for(int i =1;i<n;i++){
        if(aj[i]>lar){
            lar = aj[i];
        }
        }
        return lar;

}*/
/*string prime(int n){
   int flag =1;
    for(int i =n-1;i>=2;i--){
         if(n%i==0){
             flag = 0;
             break;
         }
    }
    if(flag==0){
        return "Number is not prime";
    }else{
        return "Number is   prime";
    }
}
int squareroot(int n){
    for(int i = 2;i<n/2;i++){
        if(i*i == n){
            return i;
        }
    }
}
int factorial(int n){
    int ans =1;
    for(int i =n;i>=2;i--){
            ans *= i;

    }
    return ans;

}
int common(int a,int b){
    int mx = a>b?a:b;
    while(true){
    if(mx%a == 0 && mx%b ==0){
        return mx;
        break;
    }
    mx++;
}

    }*/
    void show(string *top){
        for(int i =0;top[i]!= '\0';i++){
            cout<<top[i]<<"\n";
        }

    }



int main(){

    //Q.1 W.A.P. to find the max value of array by using function

/* int s;
    cout<<"enter the size of an array\n";
    cin>>s;
    int arr[s];
    cout<<"enter the values\n";
    for(int i =0;i<s;i++){
        cin>>arr[i];
    }*/
    //cout<<maxvalue(arr,s);

    //Q.2 W.A.P. to check entered number is prime or not using function
    //cout<<prime(7);

    //Q.3 W.A.P. to find the square root of any valid no.
    //cout<<squareroot(89);

    //Q.4 W.A.P. to find the factorial of any number
    //cout<<factorial(5);

    //Q.5 W.A.P. to display the common factor of two number using function
   // cout<<common(12,15);

   string arr[] = {"ggghgjh","jgghg"};
   show(arr);




}
