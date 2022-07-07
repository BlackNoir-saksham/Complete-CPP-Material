#include <iostream>
using namespace std;
int main()
{
    cout << "Enter your total savings:";
    int savings;
    cin >> savings;

    if (savings < 5000)
    {
        cout << "Gareeb sala";
    }
    else if(5001<savings<10000 )
    {
        cout << "Ameer";
        
    }
    else 
    {
        cout << "Baap k paisa";
    }

    return 0;
}