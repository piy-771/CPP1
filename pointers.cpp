#include <iostream>
using namespace std;
int main(){

    //double pointer

/*int p =100;
int *k = &p;
cout<<"address of k = "<<&k<<"\n";
cout<<"address of p = "<<k<<"\n";
cout<<"value of p = "<<*k<<"\n";
int **ptr = &k;
cout<<"address of k = "<<ptr<<"\n";
cout<<"value of k ="<<*ptr<<"\n";
cout<<"value of ptr = "<<**ptr<<"\n";*/


   //how we intialize 2d array dynamically
   int r,c;
   cout<<"enter no. of row\n";
   cin>>r;
   cout<<"enter no. of column\n";
   cin>>c;
   int **p = new int *[r];
   for(int i =0;i<r;i++){
    p[i] = new int[c];
   }
   for(int x =0;x<r;x++){
    for(int y =0;y<c;y++){
        cin>>p[x][y];
    }
   }
   cout<<"stored data are\n";
   for(int x =0;x<r;x++){
    for(int y =0;y<c;y++){
        cout<<p[x][y]<<"\t";
    }
    cout<<"\n";
   }
}
