#include <iostream>
using namespace std;
int main(){
 /*   int a[4];
    a[1] = 12;
    cout<<a[2];
    int b[] = {14,5,89,4};
    cout<<*b;     //pointer(*)*/

  /*  int a[] = {4,5,8,6,25};
    //int s = sizeof(a)/sizeof(a[0]);
    for(int i =0;i<sizeof(a)/sizeof(a[0]);i++){
        cout<<a[i]<<"\n";
    }*/

 /*   int b[5];
    cout<<"Enter 5 value\n";
    for(int i =0;i<5;i++){
        cin>>b[i];
    }
    for(int i =0;i<5;i++){
        cout<<b[i]<<"\n";
    }*/

 /*   int b[5] = {4,5,6,89,25};
    for(int i =0;i<5;i++){
        if(b[i]%2==0){
            cout<<b[i]<<"\n";
        }
    }*/


     //largest no. in an array
/*   int b[5] = {90,9,1,89,25};
    int l=b[0];
    for(int i = 1;i<5;i++){
            if(b[i]>l){
                l = b[i];
            }

    }

    cout<<"largest no."<<l;*/

    //sorting
 /*   int t;
    for(int i =0;i<=5;i++){
        for(int j = 0;j<=5;j++){
                if(b[i]>b[j]){
                     t = b[i];
                     b[i] = b[j];
                     b[j] = t;
                }

        }

    }
    for(int k =0;k<5;k++){
            cout<<b[k]<<"\t";
        }*/


     //Q.1 Display the sum of the values of an array?
  /*   int n;
       cout<<"enter the size of array\n";
       cin>>n;
        int a[n];
        int sum =0;
        cout<<"enter the value\n";
        for(int i =0;i<n;i++){
                cin>>a[i];
            sum += a[i];
        }
        cout<<"sum = "<<sum;*/


       // Q.2  Display the values of an array in reverse order?
  /*    int n;
       cout<<"enter the size of array\n";
       cin>>n;
    int a[n];
    int rev[n];

        cout<<"enter the value\n";
        for(int i =0;i<n;i++){
            cin>>a[i];

        }
        cout<<"reverse array:\t ";
        for(int i =0;i<n;i++){
                rev[i] = a[n-i-1];
            cout<<rev[i]<<"\t";

        }*/

    //    Q.3  Display only unique value of an array?
/*    int n;
       cout<<"enter the size of array\n";
       cin>>n;
    int a[n];

        cout<<"enter the value\n";
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        int u[n];
        for(int i =0;i<n;i++){
                for(int j =0;j<n;j++){
                    if(a[i] != a[j]){
                        continue;

                    }else{
                    u[n]=a[i];
                    }

                }
        }
        for(int i =0;i<n;i++){
            cout<<u[i];
        }

        /*for(int i =0;i<sizeof(u)/sizeof(u[0]);i++){
            cout<<u[i]<<"\t";
        }*/

       // Q.4 Display the duplicate value of an array?







      //Q.5 Display the values of an array in ascending order?

 /*      int n;
       cout<<"enter the size of array\n";
       cin>>n;
    int b[n];
    int t;

        cout<<"enter the value\n";
        for(int i =0;i<n;i++){
            cin>>b[i];
        }




       for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
                if(b[i]<b[j]){
                     t = b[i];
                     b[i] = b[j];
                     b[j] = t;
                }

        }

    }
    for(int i =0;i<n;i++){
            cout<<b[i]<<"\t";*/


        //bubble sort sir  code
       /* int a[] = {2,4,3,5,1,6};
        int n = sizeof(a)/sizeof(a[0]);
        int tmp;
        for(int i =0;i<n;i++){
            for(int j =0;j<n-i-1;j++){
                if(a[j]<a[j+1]){
                    tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                }
            }
        }
        for(int i =0;i<n;i++){
            cout<<a[i]<<"\t";
        }*/




 /*       int n;
       cout<<"enter the size of array\n";
       cin>>n;
    int b[n];
    int t;

        cout<<"enter the value\n";
        for(int i =0;i<n;i++){
            cin>>b[i];
        }
        int sum =0;
        int r[n];
        for(int i = 0;i<n;i++){
            for(int j =1;j<n;j++){
                if(b[i] == b[j]){
                    r[j] = b[i];
                }
            }
        }
        cout<<sum;*/


        //write a program to find 2nd largest no.
        int a[] = {37,61 ,30, 28 ,47 ,42 ,25 };
        int s = sizeof(a)/sizeof(a[0]);
        int mx1 = a[0];
        int mx2 = -1;
        for(int i =1;i<s;i++){
            if(mx1<a[i]){
                mx2 = mx1;
                mx1 = a[i];
            }
            else if(mx2<a[i] && mx1>a[i]){
                mx2 = a[i];
            }
        }
        cout<<"second largest - "<<mx2;
        //cout<<mx1;

        //write a prime no. 1st approch
       /* int a;
        int f =0;
        cout<<"enter the no.\n";
        cin>>a;
        int k = a-1;
        for(k;k>1;k--){
            if(a%k==0){
                f++;
                break;
            }
        }
        if(f==1){
            cout<<"not prime";
        }else{
        cout<<"prime";}*/


        //prime no. 2nd approch

      /*  int n, c=0,t;
        cout<<"enter the no.\n";
        cin>>n;
        t= n;
        while(n>0){
            if(t%n ==0){
                c++;
            }
            n--;
        }
        if(c==2){
            cout<<"prime number";
        }
        else{
            cout<<"not prime";
        }*/

        //count the no. of prime no. in an array
     /*   int n;
       cout<<"enter the size of array\n";
       cin>>n;
    int b[n];
    int t;

        cout<<"enter the value\n";
        for(int i =0;i<n;i++){
            cin>>b[i];
        }*/
     /*   int n =7;
        for(int r =0;r<n;++r){
            int num =1;
            for(int s =0;s<n-r-1;++s){
                cout<<" ";
            }
            for(int c =0;c<=r;c++){
                cout<<num<<" ";
                num = num*(r-c)/(c+1);
            }
            cout<<"\n";
        }*/








}
