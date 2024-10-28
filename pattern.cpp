#include <iostream>
using namespace std;
int main(){
       //Pattern 5
/*for(int i = 1;i<=4;i++){
    for(i8nt j =4;j>=i;j--){
        cout<<i<<"\t";
    }
    cout<<"\n";
}*/
/*int n =4;
for(char i = 'a';i<='d';i++){
    for(char j = 'd';j>=i;j--){
        cout<<i<<" ";
    }
    cout<<"\n";
}*/

/*for(int i = 1;i<=4;i++){
    for(int s = 4;s>i;s--){
            cout<<" ";

    }
    for(int j = 1;j<=i;j++){
        cout<<"*";
    }

    cout<<"\n";
}*/
/*for(int i = 1;i<=4;i++){
    for(int s = 4;s>i;s--){
            cout<<" ";

    }
    for(int j = 1;j<=i;j++){
        cout<<i;
    }

    cout<<"\n";
}*/

/*for(char i ='A' ;i<='D';i++){
    for(char s = 'D';s>i;s--){
            cout<<" ";

    }
    for(char j = 'A';j<=i;j++){
        cout<<j;
    }

    cout<<"\n";
}*/

    for(int i = 1;i<=4;i++){
    for(int s = 4;s>i;s--){
            cout<<" ";

    }
    for(int j = 1;j<=i;j++){
        cout<<char(j+64);
    }

    cout<<"\n";
}
/*int k = 1;
for(int i = 1;i<=4;i++){
    for(int s = 4;s>i;s--){
            cout<<" ";

    }
    for(int j = 1;j<=i;j++){
        cout<<k;
        k++;
    }

    cout<<"\n";
}*/

       //full pyramid
/*      int n =4;
for(int i = 1;i<=n;++i){
    for(int s = i;s<n;++s){
            cout<<" ";

    }
    for(int j = 1;j<=i;++j){
        cout<<"* ";

    }

    cout<<"\n";
}*/



    //inverted pyramid

    int n =8;
for(int i = 1;i<=n;++i){
    for(int s = 1;s<i;++s){
            cout<<" ";

    }
    for(int j = n;j>=i;--j){
        cout<<"* ";

    }

    cout<<"\n";
}
    //Pascal Triangle
   /* int n;
    cout<<"enter no. of row\n";
    cin>>n;
    for(int i =0;i<n;++i){
        int num =1;
        for(int j =0;j<n-i-1;++j){
            cout<<" ";
        }
        for(int k =0;k<=i;++k){
            cout<<num<<" ";
            num = num*(i-k)/(k+1);
        }
        cout<<"\n";
    }*/

 /*   int n;
    cout<<"enter no. of row\n";
    cin>>n;

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i ==0 || j ==0||i ==n-1||j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";

        }
        cout<<"\n";
    }*/



        // code here
       /* int n =5;
        for(int i =1;i<=n;i++){
            for(int j =1;j<=n-i+1;j++){
                cout<<j<<" ";
            }
            cout<<"\n";
        }*/
       /* int n =5;
        for(int i =1;i<=n;i++){
            for(int s =0;s<i;s++){
                cout<<" ";
            }
            for(int j =1;j<=n-i+1;j++){
                cout<<"* ";
            }
            cout<<"\n";
        }*/

}






