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
    int n, k;
    int i = 0, j = 0 , range , a = 1 , b = 1 , mx = 1 ;
    cin >> n >> k; 
    vector<int>v(n);
    map<int,int>mp;
    set<int>st;
    for (auto& it : v) { cin >> it; }
    while (i < n) {
        while (j < n) {
            if (mp.size() < k) { mp[v[j]]++; j++; }
            else if (mp.size() == k) {
                if (mp.count(v[j])) { mp[v[j]]++ ; j++; }
                else {  break; }
            }
        }
        range = j - i;
        if (range > mx) { mx = range; a = i + 1, b = j; }
        mp[v[i]]--;
        if (!mp[v[i]]) { mp.erase(v[i]); }
        i++;
    }
    cout << a << " " << b;
}
//************************
int main() {
    // segment k-good if it contains no more than k different values.
    fast;
    int t = 1;
    //cin >> t; 
    while (t--) { do_it(); }
}