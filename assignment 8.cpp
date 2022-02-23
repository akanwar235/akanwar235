#include<bits/stdc++.h>
using namespace std;

class vec{
    public:
    vector<int> v;
    vector<int> :: iterator it;

    void addelements(){
        cout<<"Put 10 elements in vector\n";
        for(int i=0;i<10;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }
    }

    void insertnewel(){
        cout<<"Enter the no. you want to insert at position 4th and 7th\n";
        int a,b;
        cin>>a>>b;
        v.insert(v.begin()+3,a);
        v.insert(v.begin()+6,b);
    }

    void display(){
        for(it=v.begin();it<v.end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }

    void delelements(){
        v.erase(v.begin()+2,v.begin()+7);
    }

};


int main(){

    vec v1;
    v1.addelements();
    v1.insertnewel();
    v1.display();
    v1.delelements();
    v1.display();

return 0;
}