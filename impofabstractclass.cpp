#include<bits/stdc++.h>
using namespace std;
class ICC{
    public:virtual void cricket();

};
class india :public ICC{
    public:void cricket(){
        cout<<"team india";
    }
};
class pakistan :public ICC{
    public:void cricket(){
        cout<<"pakistan";

    }
};
int main(){
    ICC *t;
    india i;
    pakistan p;
    t=&i;
    t->cricket();
    t=&p;
    t->cricket();


return 0;
}