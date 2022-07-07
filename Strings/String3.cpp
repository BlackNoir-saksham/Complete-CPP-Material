#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str = "nincompoop";

    str.erase(3, 3);
    cout << str << endl;

    cout << str.find("poo") << endl; // returns index
    str.insert(4, "LOL");
    cout << str << endl;

    cout << str.length() << endl;
    cout << str.size() << endl;

    string s = str.substr(6, 4);
    cout << s << endl;


    string s2 ="356";

    int x= stoi(s2);    //string to int
    cout<<x+10<<endl;


    cout<<to_string(x)+"4"<<endl;


    string s5 = "hdgjfhafglhwkefgl";
    sort(s5.begin(), s5.end());
    cout<<s5<<endl;
    


    return 0;
}