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
void do_it() {
    int n; cin >> n;
    vector<pair<int, int>>v, ans;
    lp(i, n) {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sr(v);
    int a, b;
    a = v[0].first, b = v[0].second;
    cerr << "\n";
    for (int i = 0; i < n; i++) {
       cerr << v[i].first << " " << v[i].second; el;
    }
    cerr << "\n";
    for (int i = 1; i < n; i++) {
        if (v[i].first <= b) { b = max(v[i].second,b); }
        else {
            ans.push_back({ a,b });
            a = v[i].first; b = v[i].second;
        }
    }
    ans.push_back({a, b});
    lp(i, ans.size()) {
        cout << ans[i].first << " " << ans[i].second; el;
    }
    
}
//********************************************************************************************************************** 
int main() {  
    Lime;
    int t = 1; 
    //cin >> t; 
    while (t--) {
        do_it();
    }
}