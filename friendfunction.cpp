#include <iostream>
using namespace std;
class tenthFriend2;
class tenthFriend1{
int per = 90;
friend void result(tenthFriend1,tenthFriend2);

};
class tenthFriend2{
int per = 89;
friend void result(tenthFriend1,tenthFriend2);
};
void result(tenthFriend1 ob1,tenthFriend2 ob2){
if(ob1.per>ob2.per){
    cout<<ob1.per<<"is a highest";
}else{
cout<<ob2.per<<"is a highest";
}
}
int main(){
    tenthFriend1 t1;
    tenthFriend2 t2;
    result(t1,t2);

}
