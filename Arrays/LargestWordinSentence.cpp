#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter size:" << endl;
    cin>>n;

    cin.ignore();
    char arr[n + 1];

    cin.getline(arr, n);
    cin.ignore();

    int i=0, currlen = 0, maxlen = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currlen > maxlen)
            {
                maxlen = currlen;
            }
            currlen=0;
        }
        currlen++;

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout << maxlen << endl;
    return 0;
}