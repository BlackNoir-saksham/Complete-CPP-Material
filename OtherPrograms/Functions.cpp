#include <iostream>
using namespace std;


int fact(int f){
    int sum=1;
    for(int i=1;i<=f; i++){
         sum *=i; 
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the number to be Factorialised: ";
    cin>> n;
    cout<<"Factorial of "<<n<<" is "<<fact(n);
}