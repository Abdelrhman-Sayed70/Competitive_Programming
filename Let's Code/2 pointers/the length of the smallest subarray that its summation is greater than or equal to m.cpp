#include<bits/stdc++.h>
#include<math.h>
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
//************************************************************************************************* 
 
void do_it() {
    // the length of the smallest subarray that its summation is greater than or equal to m
    ll n, m;
    cin >> n >> m; 
    vl v(n);
    for (auto & i : v) { cin >> i; }
    ll mn = 1e7, ptr1 = 0, ptr2 = 0, sum = 0;
    bool valid = false;
    while (ptr1 < n) {
        while (ptr2 < n and sum<m) {
            sum += v[ptr2];
            ptr2++;
        }
        if (sum < m) { break; }
        if (sum >= m) { valid = 1; }
        mn = min(mn, ptr2 - ptr1);
        sum -= v[ptr1];
        ptr1++; 
    }
    cout << (valid ? mn : -1);
}
int main() {
    Lime;
    int t = 1;
    //cin >> t;
    while (t--) {
        do_it();
    }
}