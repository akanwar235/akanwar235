#include<bits/stdc++.h>
using namespace std;
class xyz;
class abc {
int a;
public:void getdata(){
    cout<<"jjdvfv"<<endl;
}
friend class xyz;
};
class xyz{
    public:void age(abc &t){
        cin>>t.a;
        cout<<t.a;

    }
};
int main(){
    abc g;
   xyz o;
   g.getdata();
   o.age(g);

return 0;
}




