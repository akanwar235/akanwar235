#include<bits/stdc++.h>
using namespace std;
class abc{
   public: virtual void getdata()=0;
    virtual void getdata2()=0;
    void age(){
        cout<<"age";
    }
};
class b:public abc{
   public:void getdata(){
        cout<<"jf";
    }
    void f(){
        cout<<"f";
    }
};
class c:public b{
  public: void getdata2(){
      cout<<"hjmhj";
  }
      void j()
      {
          cout<<"nbnm";
      }
  };


int main(){
    c g;
    g.getdata2();
    g.getdata();

    g.j();

return 0;
}