#include <iostream>
using namespace std;
int main(){
    /*int a[3][2];
    cout<<"enter the 6 value\n";
    for(int r =0;r<3;r++){
        for(int c =0;c<2;c++){
            cin>>a[r][c];
        }


    }
    for(int r =0;r<3;r++){
        for(int c =0;c<2;c++){
            cout<<a[r][c]<<"\t";
        }
        cout<<"\n";

    }*/

    //sum of an 2d array
  /*  int sum = 0;

    int a[3][2];
    cout<<"enter the 6 value\n";
    for(int r =0;r<3;r++){
        for(int c =0;c<2;c++){
            cin>>a[r][c];
            sum += a[r][c];
        }


    }
    cout<<"sum = "<<sum;*/

      //wrap to replace 1 by 0
   /* int a[3][2];
    cout<<"enter the 6 value\n";
    for(int r =0;r<3;r++){
        for(int c =0;c<2;c++){
            cin>>a[r][c];
            if(a[r][c]==1){
                a[r][c] =0;
            }
        }
    }
    for(int r =0;r<3;r++){
        for(int c =0;c<2;c++){
            cout<<a[r][c]<<"\t";
        }
        cout<<"\n";
    }*/

    //sum of two array of same dimension

 /*   int a[2][2] = {5,6,9,2};
    int b[2][2] = {5,69,14,2};
    cout<<"enter the 6 value\n";

    for(int r =0;r<2;r++){
        for(int c =0;c<2;c++){
            cout<<a[r][c]+b[r][c]<<"\t";

        }
        cout<<"\n";
    }*/

    int a[3][3] = {1,2,3,4,5,6,7,8,9};

  for(int r =0;r<3;r++){
        for(int c =0;c<3;c++){
            cout<<a[r][c]<<"\t";

        }
        cout<<"\n";
    }

    //transpose matrix
    cout<<"transpose matrix\n";
    for(int r =0;r<3;r++){
        for(int c =0;c<3;c++)
{
        cout<<a[c][r]<<"\t";

}
cout<<"\n";
 }

}
