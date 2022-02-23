#include <bits/stdc++.h>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printnumber()
    {
        cout << "your no. is" << a << "a" << b << "i" << endl;
    }
};

int main()
{
    complex c1(4, 6);
    c1.printnumber();
    return 0;
}