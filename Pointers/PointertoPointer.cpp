#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *p;
    p=&a;
    
    cout<<*p<<endl;

    int **q=&p;

    cout<<q<<endl; //gives address of q
    cout<<*q<<endl;    //gives address of p
    cout<<**q<<endl;   // give contents stored in address of p i.e 10

    return 0;
}