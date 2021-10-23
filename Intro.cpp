//fog1

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    int cost[n];
    cost[0] = 0;
    cost[1] = abs(ar[1] - ar[0]);
    for(int i=2;i<n;i++){
        cost[i] = min(cost[i-1]+abs(ar[i-1]-ar[i]), cost[i-2]+abs(ar[i-2]-ar[i]));
    }
    cout << cost[n-1];
}

//dice combination 
#include <bits/stdc++.h>

using namespace std;

map<int, int> memo;

int main(){
    int n; cin >> n;
    int ar[n];
    long long dp[n+5]; memset(dp, 0, sizeof(dp));
    long long Mod = (long long)1e9 + 7;
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(j <= i){
                dp[i] += dp[i-j] % Mod;
            }
        }
    }
    cout << dp[n] % Mod;
}
