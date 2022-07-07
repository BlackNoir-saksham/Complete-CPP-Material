#include <iostream>
#include <list>
using namespace std;

void display(list<int> &l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++) /// Method to diaplay list
    {
        cout << *it << " ";
    }
}
int main()
{

    list<int> list1;
    list1.push_back(4);
    list1.push_back(2);
    list1.push_back(9);
    list1.push_back(8);
    list1.push_back(15);

    // filling list2 elements
    list<int> list2(3);
    list<int>::iterator iter;
    iter = list2.begin();

    *iter = 45;
    iter++;
    *iter = 10;
    iter++;
    *iter = 7;
    iter++;
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9);  //removes 9
    list1.sort();

    display(list1);
    cout << endl;
    display(list2);
    cout << endl;
    cout << "After Merging"<<endl;
    list1.merge(list2);

    list1.reverse();
    display(list1);

    return 0;
}