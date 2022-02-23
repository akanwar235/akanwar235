#include<bits/stdc++.h>
using namespace std;
class abc{
    int a,b;
    public:void operator+(){
  
 cin>>a;
 cin>>b; 
        a=-a;
        b=-b;
        cout<<a;
        cout<<b;
        
    }
};

int main(){
    abc n;
    +n;

return 0;
}