#include <iostream>
using namespace std;

int main()
{
    int n,j=0;
    
    cout << "Enter the Length: " << endl;
    cin >> n;
    

    for(int i=1;i<=n;i++){
        for( j=1;j<=n-i;j++){
            cout<<" ";
        }
        for( int j=1;j<=i;j++){
            cout<<j;
        }
        for( int k=2;k<=i;k++){
            cout<<k-1;
        }
      cout<<endl;
    }
}