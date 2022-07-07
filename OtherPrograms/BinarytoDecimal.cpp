#include <iostream>
#include <cmath>
using namespace std;

int toDec(int bin1)
{
    int i = 0, rem, sum = 0;
    while (bin1 != 0)
    {
        rem = bin1 % 10;
        sum = sum + rem * round(pow(2, i));
        i++;
        bin1 = bin1 / 10;
    }
    return sum;
}

int main()
{
    int bin;
    cout << "Enter the Binary Value: " << endl;
    cin >> bin;

    cout << toDec(bin);
    return 0;
}