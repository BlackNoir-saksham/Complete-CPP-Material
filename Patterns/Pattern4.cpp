#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Length: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i%2!=0 && j%2!=0){
                cout<<"1 ";
            }
            if(i%2!=0 && j%2==0){
                cout<<"0 ";
            }
            if(i%2==0 && j%2!=0){
                cout<<"0 ";
            }
            if(i%2==0 && j%2==0){  /// or use if((i+j)%2==0){cout<<"1"}else{cout<<"0"}
                cout<<"1 ";
            }
        }
        cout<<endl;
    }
}