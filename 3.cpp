#include <iostream>
using namespace std;
int a=4, b=5;
void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}
int main(){

    cout<<b;
    return 0;
}