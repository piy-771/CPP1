#include <iostream>
using namespace std;
#include <thread>
void even(int s,int e){
    for(s;s<=e;s++){
        if(s%2 == 0){
            cout<<"enen no. = "<<s<<"\t";
        }
    }

}
void odd(int s,int e){
for(s;s<=e;s++){
        if(s%2 != 0){
            cout<<"odd no. = "<<s<<"\t";
        }
    }
}
int main(){
thread t1(even,1,200);
thread t2(odd,1,200);
t1.join();
t2.join();
cout<<"\nclosed";
}
