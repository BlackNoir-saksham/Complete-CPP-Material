#include<bits/stdc++.h>
using namespace std;
 bool judgeCircle(string moves) {
    int x = 0;
    int y = 0;
    for (int i = 0; i < moves.size(); ++i) {
      switch (moves[i]) {
        case 'U':
          --y;
          break;
        case 'D':
          ++y;
          break;
        case 'L':
          --x;
          break;
        case 'R':
          ++x;
          break;
      }
    }
    
    return x == 0 && y == 0;
  }

int main(){
    string moves = "RURLDLU";
    cout<<judgeCircle(moves);
    return 0;
}