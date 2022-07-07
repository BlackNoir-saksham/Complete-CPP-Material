#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &a){
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
}
void removeDuplicates(vector<int> &a){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if (a[i] == a[j]){
                a.erase(a.begin()+j);
            }
        }
    }

}
int main()
{
    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    removeDuplicates(arr);
    display(arr);

    return 0;
}