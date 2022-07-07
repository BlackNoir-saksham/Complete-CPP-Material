#include <iostream>
using namespace std;

int main()
{
    int max1, max2=0;
    int nums[]={1,2,3,1,2};
        for(int i=0;i<5;i++){
            if(i%2==0){
                max1 +=nums[i];
                i++;
            }else{
            max2 += nums[i];
                i++;
            }
        }
        if(max1>max2){
            cout<< max1;
        }
        else{
            cout<< max2;
        }
    


    return 0;
}