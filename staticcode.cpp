#include<bits/stdc++.h>
using namespace std;
class first{
    static int a;
    public: static void dorje()
    {
        cout<<"your a value is"<<a;

    };
    static void negi();
    
    

};
int first::a=45;
void first ::negi()
{
    cout<<"dadyy";
}
int main(){
first::dorje();
first::negi();
return 0;
}