#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<string, int> marks;
    marks["sakky"] = 102;
    marks["b_noir"] = 68;
    marks["soul"] = 87;

    marks.insert({{"lucy", 80}, {"shaggy", 98}});

    map<string, int> :: iterator itr;
    for (itr = marks.begin(); itr != marks.end(); itr++)
    {
        cout << (*itr).first << "  ->  " << (*itr).second << endl;
    }
    return 0;
}