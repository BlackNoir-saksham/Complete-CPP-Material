#include <iostream>
using namespace std;

int isPrime(int num)
{
    int c = 0;
    for (int j = 2; j < num; j++)
    {
        if (num % j == 0)
            c++;
    }
    if (c == 0)
        cout <<" "<<num;
}

int prime(int n1, int n2)
{
    for (int i = n1; i <= n2; i++)
    {
         isPrime(i);
    }
}

int main()
{

    int num1, num2;
    cout << "Enter the Range: " << endl;
    cin >> num1;
    cout << " to  " << endl;
    cin >> num2;
    cout<<"Prime number from "<<num1<<" to "<<num2<<" is => ";
    cout << prime(num1, num2);
}