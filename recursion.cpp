#include<bits/stdc++.h>
using namespace std;
int result=1;
int fac(int n){
    
  
    if(n!=0)
    {
        result=result * n;
        fac(n-1);
        
    }
    return result;

}
  int main(){
      int n;
      cout<<"enter n value";
      cin>>n;
      
      cout<<"result is"<<fac(n);

      return 0;  
      
  }