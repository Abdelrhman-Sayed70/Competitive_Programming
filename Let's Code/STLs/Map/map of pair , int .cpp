#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(0) 
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
//************************
void do_it() {
    int n, m, k; cin >> n >> m >> k;  
    vector<ll>v(n),partialsum(n+1);
    for (auto& it : v) { cin >> it; }
    vector<map<pair<int, int>, int>>operation;
    while (m--) {
        // operation is to add allvalues between a , b by value c
        int a, b , c ; 
        cin >> a >> b >> c;
        a--;  
        map<pair<int, int>, int>mp;
        mp[{a, b}] = c;
        operation.push_back(mp);
    }
    while (k--) {
        // applay operation from a to b 
        int a, b;
        cin >> a >> b; 
        a--; b--; 
        for (int i = a; i <= b; i++) {
            int val = 0;
            map<pair<int, int>, int>mp;
            pair<int, int>pr;
            mp = operation[i];
            map<pair<int, int>, int>::iterator it = mp.begin();
            pr = it->first;
            val = it->second;
            partialsum[pr.first] += val;
            partialsum[pr.second] -= val;
        }
    }
    v[0] += partialsum[0]; 
    for (int i = 1; i < v.size(); i++) {
        partialsum[i] += partialsum[i - 1];
        v[i] += partialsum[i];
    }
    out(v);
}
//************************
int main() {
    fast;   
    int t = 1;
    //cin >> t; 
    while (t--) { do_it(); }
}