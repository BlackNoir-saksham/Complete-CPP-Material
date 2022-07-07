#include <iostream>
using namespace std;

void fibonacci(int num)
{
    int n1 = 0, n2 = 1, nextTerm, temp;
    for (int i = 0; i < num; i++)
    {
        cout << n1<<" ";
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }
    return;
}

int main()
{
    int n;
    cout << "Enter the length of Fibonacci series: " << endl;
    cin >> n;

      fibonacci(n);
    return 0;
}