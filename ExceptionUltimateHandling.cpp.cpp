#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter age \n";
    cin>>i;
    try{
        if(i==1){
            throw i;
        }else if(i==2){
            throw 'c';
        }else if(i==3){
            throw float(1.2);
        }
        cout<<"welcome \n";
    }
    catch(int a){
        cout<<"Ingeger value \n";
    }
    catch (float f){
        cout<<"float value";
    }
    catch(char c){
        cout<<"char value";
    }
    catch(...){
        cout<<"server error";
    }
    cout<<"\n Go To Hell!!!!!";
}
