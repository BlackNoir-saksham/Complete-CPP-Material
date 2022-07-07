#include <bits/stdc++.h>
using namespace std;

int Partition(vector<int> &nums, int l, int r)
{

    int pivot = nums[r];
    int j = l;
    for (int i = l; i < r; ++i)
    {
        if (nums[i] < pivot)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
    swap(nums[j], nums[r]);
    return j;
}

void Quicksort(vector<int> &nums, int l, int r)
{

    if (l < r)
    {
        int p = Partition(nums, l, r);
        Quicksort(nums, l, p - 1);
        Quicksort(nums, p + 1, r);
    }
}

void PrintVector(vector<int> nums)
{
    for (int i = 0; i < nums.size(); ++i)
        cout << nums[i] << " ";
    cout << "\n\n";
}

int main()
{

    vector<int> nums = {6, 3, 9, 5, 2, 8, 7};

    cout << "Vector Before Sorting: " << endl;
    PrintVector(nums);

    Quicksort(nums, 0, nums.size() - 1);

    cout << "Vector After Sorting: " << endl;
    PrintVector(nums);
}