#include<bits/stdc++.h>
using namespace std;
class abc{
public:virtual void r(){
    cout<<"abcc";
}

};
class xyz : public abc{
    public:void r(){
        cout<<"xyxz";

    }
};
int main(){
    xyz u;
    abc j; 
    u.abc::r();//syntax
    u.r();
return 0;
}