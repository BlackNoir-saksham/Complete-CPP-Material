#include<bits/stdc++.h>
using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y] == 1){
        return true;
    }
    return false;
}

bool ratinMaze(int** arr, int x, int y,int n, int** solArr){

    if(x==n-1 && y==n-1){
        solArr[x][y]=1;
        return true;
    }

    if(isSafe(arr, x, y, n)){
        solArr[x][y]=1;
        if(ratinMaze(arr, x+1, y, n, solArr)){
            return true;
        }
        if(ratinMaze(arr, x, y+1, n, solArr)){
            return true;
        }
        solArr[x][y]=0;  //BACKTRACKING
        return false;
    }
    return false;
}

int main(){
    int n;
    cout<<"Input Size: "<<endl;
    cin>>n;

    int** arr= new int*[n];
    for(int i=0; i<n;i++){
        arr[i]=new int[n];  // dynamically allocating mem. to 2D array
    }
    cout<<"Enter Elememts of Maze in 0 & 1: "<<endl;
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            cin>>arr[i][j];
        }
    }cout<<endl<<endl;

    int** solArr= new int*[n];
    for(int i=0; i<n;i++){
        solArr[i]=new int[n];  // dynamically allocating mem. solution array
    }

    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            solArr[i][j]=0;    // initialising solArr with 0
        }
    }

    if(ratinMaze(arr,0,0,n,solArr)){
        for(int i=0; i<n;i++){
            for(int j=0; j<n;j++){
                cout<<solArr[i][j]<<" ";
            }cout<<endl;
        }
    }
    return 0;
}

// 1 0 1 0 1   to input
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1