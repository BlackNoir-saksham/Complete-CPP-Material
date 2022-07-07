#include<bits/stdc++.h>
using namespace std;

void merge(vector<vector<int>>& intervals){
      vector<vector<int>> res;
     
     for(int i=0; i<intervals.size(); i++ ){
         if(intervals[i][1]>=intervals[i+1][0]){
            
             res.push_back(vector<int>{intervals[i][0], intervals[i+1][1]});
         }else{
             
             res.push_back(vector<int>{intervals[i][0], intervals[i][1]});


         }
     }
     for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[0].size(); j++)
        {
            cout << res[i][j] << " ";
        }   
        cout << endl;
    }
 }
int main(){
    vector<vector<int>> intervals ={ {1,3}, {2,6}, {8,10},{15,18}};
    merge(intervals);
    return 0;
}