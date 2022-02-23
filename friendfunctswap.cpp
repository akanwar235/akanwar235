#include<bits/stdc++.h>
using namespace std;
class xyz;
class abc{
    int a;
    public:friend void swap(abc &t,xyz &u);

};
class xyz{
    int b;
    public:friend void swap(abc &t,xyz &u);
};
void swap(abc &t,xyz &u){
cin>>t.a;
cin>>u.b;
t.a=t.a+u.b;
u.b=t.a-u.b;
t.a=t.a-u.b;
cout<<t.a<<endl;
cout<<u.b<<endl;


}
int main(){
    abc z;
    xyz w;
    swap(z,w);

return 0;
}