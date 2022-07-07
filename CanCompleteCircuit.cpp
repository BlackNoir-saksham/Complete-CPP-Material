#include<bits/stdc++.h>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost){
    int n=gas.size();
    int sumOfGas=0;
    int sumOfCost=0;
    int starting=0 ;
    for(int i=0; i<n; i++){
        sumOfGas += gas[i];
        sumOfCost += cost[i];
    }
    if(sumOfGas<sumOfCost){
        return -1;
    }
    
    int currentGas=0;
    for(int i=0; i<n; i++){
        currentGas += gas[i]-cost[i];
        if(currentGas<0){
            starting = i+1;
            currentGas=0;
        }
    }
    return starting;
    
    
}

int main(){
    vector<int> gas = {3,1,1};
    vector<int> cost = {1,2,2};
    cout<<canCompleteCircuit(gas, cost);

    return 0;
}