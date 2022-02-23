#include<bits/stdc++.h>
using namespace std;
class first
{
    protected: int a;

};
class second
{
    protected: int b;
};
class third: public first,second
{
public: void add()
{
    int c;

    cin>>a;
    cin>>b;

    c=a+b;
    cout<<c;
}
} ; 
int main(){
    third q;
    q.add();

return 0;
}