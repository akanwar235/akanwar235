#include<bits/stdc++.h>
using namespace std;

int main(){
ifstream chd;
chd.open("hello.txt");
char mydata[100];
chd>>mydata;
cout<<mydata;

chd.close();
return 0;
}