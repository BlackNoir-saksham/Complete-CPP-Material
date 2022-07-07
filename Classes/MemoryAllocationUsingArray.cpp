#include <iostream>
using namespace std;

class Shop
{
    int itemID[100];
    int itemPrice[100];
    static int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void setItem(void);
    void display(void);
    static void count(void);
};

int Shop ::counter; // To keep counting even for a different

void Shop ::count(void)
{
    cout << "The value of counter is :" << counter << endl; // you can only access static variable in a static
}

void Shop ::setItem(void)
{

    cout << "Enter item ID: " << counter + 1 << endl;
    cin >> itemID[counter];
    cout << "Enter item Price: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of Item with  ID " << itemID[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{

    Shop Dukaan, Nukkad;

    Dukaan.initCounter();

    Dukaan.setItem();
    Dukaan.setItem();

    Shop ::count();
        // Different object--> Nukkad
        Nukkad.setItem();
    Nukkad.setItem();

    Dukaan.display();

    return 0;
}