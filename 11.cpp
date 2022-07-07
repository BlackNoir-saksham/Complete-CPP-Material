#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nums[] = {2, 0, 2, 1, 1, 0};
    int min = nums[0];
     int counter = 1;

    

    while (counter < 6)
    {
        for (int i = 0; i < 6 - counter; i++)
        {
            if (nums[i] > nums[i+1])
            {
                int temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}