#include <iostream>

using namespace std;

class Binary
{
// private:
    string s; // everything in class is private by default unless used public

public:
    void read(void); // Declaration
    void check(void);
    void ones_Comp(void);
    void display(void);
};

void Binary ::read(void)
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
}

void Binary ::check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid binary Number Format" << endl;
            exit(0);
        }
    }
}

void Binary ::ones_Comp(void)
{
    check();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void Binary ::display(void)
{
    cout << "Displaying your binary number 1's complement" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    Binary b;
    b.read();
    b.check();
    b.ones_Comp();
    b.display();

    return 0;
}