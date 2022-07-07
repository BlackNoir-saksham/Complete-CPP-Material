#include <cmath> // to include pow function
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a Number: " << endl;
    int n, r,m1,sum, rem,power, m2;
    int i=0 ;
    cin >> n;
     m1 = n;
     m2 = n;
    cout<<m1<<endl;
    
    while (m1 != 0)
    {
        r = m1 % 10;
        i++;
        m1 = m1 / 10;
    }
    cout<<i<<endl;
    cout<<m2<<endl;
    
    while (m2 !=0)
    {
        rem = m2 % 10;
        power=round(pow(rem, i));
        sum = sum + power;
        m2 = m2 / 10;
    }
    if (sum == n)
    {
        cout << "Is Armstrong number";
    }
    else
    {
        cout << "Is not an Armstrong number";
    }
   
}
// #include <cmath>
// #include <iostream>

// using namespace std;

// int main() {
//    int num, originalNum, remainder, n = 0, result = 0, power;
//    cout << "Enter an integer: ";
//    cin >> num;

//    originalNum = num;

//    while (originalNum != 0) {
//       originalNum /= 10;
//       ++n;
//    }
//    originalNum = num;

//    while (originalNum != 0) {
//       remainder = originalNum % 10;

//       // pow() returns a double value
//       // round() returns the equivalent int
//       power = round(pow(remainder, n));
//       result += power;
//       originalNum /= 10;
//    }

//    if (result == num)
//       cout << num << " is an Armstrong number.";
//    else
//       cout << num << " is not an Armstrong number.";
//    return 0;
// }