#include <iostream>
using namespace std;
int main(){
  /*  int a[2][3][2] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for(int t =0;t<2;t++){
        for(int r =0;r<3;r++){
        for(int c =0;c<2;c++)
{
        cout<<a[t][r][c]<<"\t";

}
cout<<"\n";
 }
    }*/

    //reverse an array
    /*int a[] =  {2,4,3,5,1,6};
    int n =sizeof(a)/sizeof(a[0]);
    for(int i =n-1;i>=0;i--){
        cout<<a[i]<<"\t";
    }*/

    int a[] = {0,2,0,3,5,0,6,8,0,0,52,};
        int n = sizeof(a)/sizeof(a[0]);
        int tmp;
        for(int i =0;i<n;i++){
            for(int j =0;j<n-i-1;j++){
                if(a[j]==0){
                    tmp = a[j+1];
                    a[j+1] = 0;
                    a[j] = tmp;

                }
            }
        }
        for(int i =0;i<n;i++){
            cout<<a[i]<<"\t";
        }




}
