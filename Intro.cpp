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
