#include<iostream>
using namespace std;
class student 
{
private:
    int a;
public:
 int b;
    void setdata(int a1, int a2);


void getdata(){
    cout<<b;
}
};
void student :: setdata(int a1, int a2){
 a=a1;
b=a2;
}
int main(){
student sanat;

sanat.b=6;
sanat.getdata();



    return 0;
}