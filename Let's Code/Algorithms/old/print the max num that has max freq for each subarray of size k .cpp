#include<bits/stdc++.h>
using namespace std;        
#define fastIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0) 
#define ll long long
#define endl "\n"
#define vi vector<int> 
#define vl vector<ll> 
#define in(v) for(int i=0;i<v.size();i++) cin>>v[i];
#define out(v) for(int i=0;i<v.size();i++) cout << v[i] << " " ;
#define sr(V) sort(V.begin(),V.end()) ;
#define lp(var,n) for (ll var=0;var<n;var++)  
#define rv(V) reverse(V.begin(), V.end());
#define rt return 
#define yes cout <<"YES\n" 
#define no cout << "NO\n"
#define el cout << "\n" 
double pi = 2 * acos(0.0);
ll mod = 1e9 + 7;
void file() {
#pragma warning(disable : 4996).
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
//********************** 
void do_it() {
    int n, k , p=0; cin >> n >> k; 
    vector<int>v(n);
    map<int, int>mp;
    set<pair<int, int>>st;
    for (auto &it : v) { cin >> it; }
    for (int i = 0; i < k; i++) { mp[v[i]]++; }
    for (auto it : mp) { st.insert({ it.second,it.first }); }
    cout << prev(st.end())->second; el;
    for (int i = k; i < n; i++) {

        st.erase({ mp[v[p]],v[p] });
        mp[v[p]]--;
        st.insert({ mp[v[p]],v[p] });

        st.erase({ mp[v[i]],v[i] });
        mp[v[i]]++;
        st.insert({ mp[v[i]], v[i] });

        p++;
        cout << prev(st.end())->second; el;
    }
}
//**********************
int main() {
    //file();
    fastIO;
    int t = 1;
    //cin >> t;
    for (int i = 1; i <= t; i++) {
        //cout << "Case #" << i << ": ";
        do_it(); 
    }
}