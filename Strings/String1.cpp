#include <iostream>
using namespace std;

int main()
{

    string str,str1(5,'n');
   
cout<<"Enter Name: "<<endl;
    getline(cin, str);    // allow us to input a sentence with spaces 
    cout << str << endl;

    cout<<str1;
    return 0;
}