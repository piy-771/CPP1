#include <iostream>
using namespace std;
/*void swp(int a,int b)
{

/*int temp = a;
a =b;
b=temp;
cout<<"a = "<<a;
cout<<"b = "<<b;
}
void table(int n){
for(int i = 1;i<=10;i++){
    cout<<i*n<<"\n";
}
}*/
void even(int a,int b ){
for(int i =a;i<=b;i++){
    if(i%2==0){
        cout<<i<<"\n";
    }
}
}


int main(){
    //swp(5,6);
    int p,q;
    /*int m;
    cout<<"Enter the no.\n";
    cin>>m;
    //table(m);*/
    cout<<"enter start range\n";
    cin>>p;
    cout<<"enter end range\n";
    cin>>q;
    even(p,q);


}
