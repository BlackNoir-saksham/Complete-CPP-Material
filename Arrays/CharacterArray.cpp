#include <iostream>
using namespace std;

int main()
{

    // char arr[50] = "Saksham ";
    // int i=0;

    // while (arr[i] != '\0')
    // {
    //     cout << arr[i] << endl;
    //     i++;
    // }

    // char a1[100];
    // cout<<"Enter character array"<<endl;
    // cin>>a1;
    // cout<<a1<<endl;
    // cout<<a1[4];

    int n;
    cout << "Enter the size of character array: " << endl;
    cin >> n;
    char a2[n + 1];
    cout << "Enter Char array: " << endl;
    cin >> a2;
    // cout<<a2;
    bool check = 1;

    for (int i = 0; i < n; i++)
    {
        if (a2[i] != a2[n - 1 - i])
        {
            check = 0;
            break;
        }
    }

    if (check == true)
    {
        cout << "PALINDROME";
    }
    else
    {
        cout << "Not a PALINDROME";
    }

    // if(a2==a3){
    //     cout<<"PALINDROME";
    // }else{
    //     cout<<"Not a PALINDROME";
    // }

    return 0;
}