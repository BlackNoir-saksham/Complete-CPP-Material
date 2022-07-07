#include <iostream>
using namespace std;

int fib(int n)
{
   {
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
}

int fibonacci(int n){
    static int a=0,b=1,c;
    if(n>0){
        
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        fibonacci(n-1);

    }

}

int main()
{

    int n;
    cout << "Enter length of Fibonacci Series: " << endl;
    cin >> n;
    cout << fib(n);
    cout << fibonacci(n);
    return 0;
}