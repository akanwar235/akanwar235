#include<bits/stdc++.h>
using namespace std;
class a
{

    public:static int q;
};
int a:: q=98;
class b: public  a
{

    public: static int maiin ()
    {
        cout<<q;
        return 0;
    }
};
int main(){
b k;
k.maiin();
return 0;
}