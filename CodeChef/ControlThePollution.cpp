#include<bits/stdc++.h>
using namespace std;

int solve(){
    int n,x,y;
    cin>>n>>x>>y;
    int m = INT_MAX;
    for(int i=0; i<=n;i++){
        for(int j=0; j<=n; j++){
            int k=100*j+4*i;
            (k>=n)? m=min(m,i*y+j*x):0;
        }
    }
    cout<<m<<endl;
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cout << "Test Cases: " << endl;
//     cin >> t;
//     while (t--)
//     {
//         int n, x, y;
//         cout << "Enter N, X and Y: " << endl;
//         cin >> n >> x >> y;
//         float bus;
//         float car;
//         int pollution = 0;

//         // car = float(n) / float(4);
//         // if (car > floor(car))
//         // {
//         //     car = ceil(car);

//         // }
//         if (n <= 100)
//         {
//             car = float(n) / float(4);
//             if (car > floor(car))
//             {
//                 car = ceil(car);
//             }
//             else if (car < 1)
//             {
//                 car = 1;
//             }
//             bus = float(n) / float(100);
//             if (bus > floor(bus))
//             {
//                 bus = ceil(bus);
//             }
//             else if (bus < 1)
//             {
//                 bus = 1;
//             }
//             pollution = min(bus * x, car * y);
//         }
//         else
//         {
//             bus = float(n) / float(100); 
//             if (bus > floor(bus))
//             {
//                 bus = floor(bus);
//                 n=n-bus*100;
//                 cout<<n<<endl;;
//             }
//             car = float(n) / float(4);
//             if (car > floor(car))
//             {
//                 car = ceil(car);
//                 cout<<car<<endl;
//             }else{
//                 car=1;
//             }
//             pollution = bus*x + car*y;
//         }
        
//         cout << pollution << endl;
//     }
//     return 0;
// }




// // #include<bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // int main(){
// //     ll t;
// //     cin>>t;
// //     while(t--){
// //         ll n,k,l;
// //         cin>>n>>k>>l;
// //         ll max=0;
// //         ll min=0;
// //             ll get = (n/100);
// //             ll jag = (n/4);
// //             if(n%100!=0){
// //                 get++;
// //             }
// //             if(n%4!=0){
// //                 jag++;
// //             }
// //     }
// //     return 0;
// // }

