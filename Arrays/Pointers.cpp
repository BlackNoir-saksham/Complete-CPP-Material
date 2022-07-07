#include <iostream>
using namespace std;

int main()
{
    int marks[5]={0,11,22,33,44};
    // int a = 3;
    // int* b = &a;
    // cout << *b<<endl;  // b returns address *b returns value of a

    // int** c= &b;
    // cout<<**c<<endl;

    //Pointers and arrays  //destructuring of array using pointers
    int *p = marks;
    cout<<"at marks[0] => "<<*p<<endl;
    cout<<"at marks[0] => "<<*(p+1)<<endl;
    cout<<"at marks[0] => "<<*(p+2)<<endl;
    cout<<"at marks[0] => "<<*(p+3)<<endl;
    cout<<"at marks[0] => "<<*(p+4)<<endl;
    

     return 0;
}
