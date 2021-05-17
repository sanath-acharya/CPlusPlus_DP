#include <bits/stdc++.h>

using namespace std;
using ll= long long;
const int INF=1e9+5;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
   int n,k;
   cin>>n;
   cin>>k;
    vector<int> h(n);
   for(int i=0;i<n;i++ ){
       cin>>h[i];
   }
//    for(int i=0;i<n;i++)
//    cout<<h[i];

    vector<int>dp(n,INF);
    dp[0]=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=i+k;j++){
        if(j<n)    
        dp[j]=min(dp[j],dp[i]+abs(h[i]-h[j]));
        }
    }

    cout<<dp[n-1]<<endl;

}
