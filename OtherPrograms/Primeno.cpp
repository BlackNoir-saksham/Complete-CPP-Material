#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a Number: \n";
    int n, i = 2, c = 0;
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            c++;
            i++;
        }
        else
        {
            i++;
        }
    }
    if (c == 0)
    {
        cout << "Number is Prime" << endl;
    }

    else
    {
        cout << "Number is Composite" << endl;
    }
}