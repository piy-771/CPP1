 #include<iostream>
using namespace std;
int main(){
/*cout<<"welcome";
cybrom:
cout<<"hello";
cout<<"hello";
cout<<"hello";
goto cybrom;
    cout<<"bye";*/
int n;
    cout<<"Enter any number - ";
    cin>>n;
    int a = 10;
    table:
        cout<<n<<" * "<<a<<" = "<<n*a<<"\n";
        a--;
    if(a>=1){
        goto table;
    }
    cout<<"\ndone";

}
