#include<bits/stdc++.h>
using namespace std;
class abc{
    public:virtual void getdata()=0;
};
class b:public abc{
    public:void panipat(){
        cout<<"panipat"<<endl;
    }
    void getdata(){
        cout<<"zabardasti";//ye banan hi padega ...abstract class ke virtual ki body deni padegi
    }
};
int main(){
    b s;
    s.getdata();
    s.panipat();

return 0;
}