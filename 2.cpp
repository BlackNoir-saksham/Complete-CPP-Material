#include <bits/stdc++.h>
using namespace std;

void closestPair(int *arr, int N){
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int diff,MAX[N-1];
    for(int i=0;i<N;i++){
       MAX[i]=arr[i]-arr[i+1];
       if(MAX[i]<0){
           MAX[i]*(-1);
       }

    }
    cout<<int( *min_element(MAX, MAX+N))<<endl;
    
}
int main(){
    int N;
    cout<<"Enter size of array: "<<endl;
    cin>>N;
    int a[N];
    cout<<"Enter elements: "<<endl;
    for(int i=0;i<N;i++){
        cin>>a[i];
    }

    closestPair(a, N);

    return 0;
}

