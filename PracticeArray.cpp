#include <iostream>
using namespace std;
int main(){
int arr[] = {-2,-3,4,-1,-2,1,5,-3};
int mx = INT_MIN;
int sum = 0;
for(int i = 0;i<8;i++){
    sum = 0;
    for(int j = i;j<8;j++){
        sum += arr[j];
        if(sum >mx){
            mx = sum;
cout<<i<<" "<<j;
        }
    }
}
cout<<mx;

}
