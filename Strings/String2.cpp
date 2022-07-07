#include <iostream>
using namespace std;

int main()
{
    string s1 = "fam";
    string s2 = "ily";

    s1.append(s2); // or s1=s1+s2
    cout << s1<<endl;

    if(s1.compare(s2)==0){    // gives 0 if strings are identical and gives not 0 otherwise
        cout<<"StrIngs are equal"<<endl;
    }else{
        cout<<"StrIngs are NOT equal"<<endl;

    }


    s1.clear();
    if(s1.empty()){
        cout<<"String is empty";
    }

    
 
    return 0;
}