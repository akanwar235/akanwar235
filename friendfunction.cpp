#include<bits/stdc++.h>
using namespace std;
class abc{
    int a;

friend void ak(abc &t);
};
friend void ak(abc &t)
{
    cin>>t.a;
    cout<<t.a;


};
int main(){
abc p;
ak (p);
return 0;
}