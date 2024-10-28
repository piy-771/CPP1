#include <iostream>
using namespace std;
/*int CheckPassword(string s){
if(sizeof(s)/sizeof(s[0])<4){
        return 0;
   }
}*/
int SmallLageSum(int ar[],int n){
if(n<= 3){
    return 0;
}
int mx1,mx2,x;
mx1 = mx2 = INT_MIN;

for(int i = 0;i<n;i = i+2){
    x = ar[i];
    if(mx1<x){
        mx2 = mx1;
        mx1 = x;
    }
    if(mx2<x && mx1>x){
        mx2 = x;
    }
}

return mx2;
}
int maxvalue(int aj[],int n){
    int lar = aj[0];
    int index = 0;
    for(int i =1;i<n;i++){
        if(aj[i]>lar){
            lar = aj[i];
            index = i;
        }
        }
        cout<<"largest number = "<<lar<<"\n";
        cout<<"index = "<<index;
        return 0;

}
int main(){
   int s;
    cout<<"enter the size of an array\n";
    cin>>s;
    int arr[s];
    cout<<"enter the values\n";
    for(int i =0;i<s;i++){
        cin>>arr[i];
    }
    //maxvalue(arr,s);
    cout<<SmallLageSum(arr,s);
    /*string s = "piyush";
    cout<<sizeof(s)/sizeof(s[0]);

    cout<<CheckPassword("hyu");*/

}
