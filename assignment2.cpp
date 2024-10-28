#include <iostream>
using namespace std;
int main(){


    /*Q.1 Problem :Two Pair Sum
Statement:Given an array of integers nums and an integer target,return indices of the two numbers such that they add up to target.
Input:v[]={2,4,6,11,8,12}, target=14
Output:[2,4]*/

/* int t,n;
    cout<<"enter the target\n";
    cin>>t;
    cout<<"enter the size of an array\n";
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
       cin>>a[i];
    }
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==t){
                cout<<i<<" "<<j;
                 cout<<"\n";
                break;
            }

        }
       }*/


       /*Q.2  Write a program to sum of two array.
              Input: A1 = [2, 3, 1, 4]   &  A2= [6]
              Output: 2320
              Input: A1 = [2, 3, 1, 4]   & A2=[2,3]
              Output: 2337
*/

 /*int a[] = {2,3,1,4};
    int b[] = {2,3};
    int r =0;
    for(int i =0;i<4;i++){
        r = (r+a[i])*10;

    }
    r = r/10;
    int t =0;
    for(int i =0;i<2;i++){
        t = (t+b[i])*10;

    }
    t = t/10;
    cout<<r+t;*/


    /*Q.3 Write a C++ program to separate even and odd numbers in a array of integers. Put all even numbers first, and then odd numbers.
 Input: 14,21,6,7,8,3,9
 Output:14,6,8,21,7,3,9*/

/* int n;
 int tmp;
 cout<<"enter the size of an array\n";
 cin>>n;
 int a[n];
 for(int i = 0;i<n;i++){
    cin>>a[i];
 }
 for(int i =0;i<n;i++){
            for(int j =0;j<n-i-1;j++){
                if(a[j]%2!=0){
                    tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                }
            }
        }
        for(int i =0;i<n;i++){
            cout<<a[i]<<"\t";
        }*/



        /*Q.4 Write a C++ program to sort a given array of 0s, 1s and 2s. In the final array put all 0s first, then all 1s and all 2s last.
Input:0,1,0,1,0,2,1,2
Output:0,0,0,1,1,1,2,2*/

/*int a[] = {0,1,0,1,0,2,1,2};
        int n = sizeof(a)/sizeof(a[0]);
        int tmp;
        for(int i =0;i<n;i++){
            for(int j =0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                }
            }
        }
        for(int i =0;i<n;i++){
            cout<<a[i]<<"\t";
        }



       /* Q.5 Given a sorted array of n elements, possibly with duplicates, find the number of occurrences of the target element.
Input: arr = [4, 4, 8, 8, 8, 15, 16, 23, 23, 42], target = 8
Output: 3*/

/*int t = 8;
int cnt =0;
int a[] = {4,4,8,8,8,15,16,23,23,42};
for(int i =0;i<sizeof(a)/sizeof(a[0]);i++){
    if(t == a[i]){
        cnt++;
    }
}
cout<<"count of "<<t<<" - "<<cnt;*/

/*Q.6 Given a sorted array of n elements, find the number of occurrences of each element.
Input: arr = [4, 4, 8, 8, 8, 15, 16, 23, 23, 53]
Output: 4=2
               8=3
              15=1
              23=2
              53=1*/


            int arr[] = {4,4,8,8,8,15,16,23,23,53};
               int c =0;
              //int r = 0;
              int ans[10];
              for(int i =0;i<sizeof(arr)/sizeof(arr[0]);i++){
                    for(int j =i;j,j<sizeof(arr)/sizeof(arr[0]);j++){
                            if(arr[i]==arr[j]){
                                c++;


                    }else{

                    break;
                    }

                    }
                    ans[i] =c;


              }
              for(int i =0;i<10;i++){
                    if(ans[i]!=0){
                            cout<<ans[i]<<"\t";

                    }

              }


           /*   Q.7 Delete the specific position from an array.
Input: arr = [9,3,2,1,5,23,10,4],position=3
Output: [9,3,2,5,23,10,4]*/



/*int a[] = {9,3,2,1,5};

int d =1;
int n = sizeof(a)/sizeof(a[0]);
if(d>=0 && d<n){
    for(int i = d+1;i<n;i++){
        a[i-1] = a[i];
    }
}
for(int i =0;i<n-1;i++){
    cout<<a[i]<<"\t";
}*/











}
