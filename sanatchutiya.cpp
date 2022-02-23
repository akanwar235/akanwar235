#include<bits/stdc++.h>
using namespace std;
class xyz
{
    int a=4;
    friend void print(a &t);

};
friend void print(a &t)
{
    cout<<a;
}
int main(){
    xyz t;

return 0;
}