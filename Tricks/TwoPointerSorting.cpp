#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int> &nums)
{
    auto ptr1 = nums.begin();
    while (ptr1 != nums.end())
    {
        auto ptr2 = min_element(ptr1, nums.end());
        swap(*ptr1, *ptr2);
        ptr1++;
    }
}
    int main()
    {
        vector<int> nums = {6, 3, 9, 5, 2, 8, 7};
        quickSort(nums);

        for (int i = 0; i < nums.size(); ++i)
            cout << nums[i] << " ";
        cout << "\n\n";
        return 0;
    }
