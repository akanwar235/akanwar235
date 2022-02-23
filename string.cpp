#include <iostream>
#include <string>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void displayprice(void);
    void setprice();
};
void shop ::setprice(void)
{
    cout << "enter id of ur item no." << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter price of ur item" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop ::displayprice(void)
{

    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id" << itemid[i] << "is" << itemprice[i];
    }
}
int main()
{

    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;

    
}