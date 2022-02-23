#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream chd;//kind of a object
    char mydata[100];//variable declaration kind of
    chd.open("hello.txt");
    cout<<"fucksanat";
    cin.getline(mydata,40);
    chd<<mydata;
    cout<<"success";
    chd.close();

return 0;
}