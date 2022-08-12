#include<bits/stdc++.h>
using namespace std;
#define Lime ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(0) 
#define ll long long
#define endl "\n"
#define vi vector<int> 
#define vl vector<ll> 
#define Vop vector<pair<ll,ll>>
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout << v[i] << " " ;
#define sr(V) sort(V.begin(),V.end()) ;
#define lp(var,n) for (ll var=0;var<n;var++)  
#define rv(V) reverse(V.begin(), V.end());
#define rt return
#define countt(s,ch) count(s.begin(),s.end(),ch) 
#define ers(s,ch) erase(s.begin()+ch)
#define yes cout <<"YES\n" 
#define no cout << "NO\n"
#define el cout << "\n" 
double pi = 2 * acos(0.0);
ll mod = 1e9 + 7;
//**********************************************************************************************************************  
int n, m;
ll arr[12][12];
ll rec(int a, int b) {
    if (a == n - 1 and b==m-1) { return arr[a][b]; }
    if (a == n or b == m) { return -1e6;  }
    ll right = rec(a, b + 1);
    ll down = rec(a + 1, b);
    return arr[a][b] + max(right, down);
}
void do_it() {
    cin >> n >> m; 
    lp(i, n) {
        lp(j, m) {
            cin >> arr[i][j];
        }
    }
    cout << rec(0, 0);
}
int main() {
    // Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X    
    Lime;
    int t = 1; 
    //cin >> t;
    while (t--) {
        do_it();
    }
}